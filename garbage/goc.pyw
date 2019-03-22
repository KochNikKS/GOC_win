
import tkinter
from tkinter import ttk as ttk, messagebox
from tkinter import filedialog as fd, colorchooser as cchoser, simpledialog as simd, StringVar
from PIL import Image, ImageTk
from random import randint
from platform import system as syst
# import platform
# import doctest
# import sys
from os import path
from src.common_utils import distance, strfilter, n_repeat, arithmetic_round as a_round, is_number


class Point:
    def __init__(self, new_name='', new_x=0, new_y=0):
        self.x = int(new_x)
        self.y = int(new_y)
        self.name = new_name

    def __str__(self):
        return "{},{}".format(self.x, self.y)

    def __repr__(self):
        return "{}: (x = {}, y = {})".format(self.name, self.x, self.y)

    @property
    def coordinates(self):
        return self.x, self.y


class Marker:
    def __init__(self, name='marker_1', color='green', counter=0):
        self.name = name
        self.color = color
        self._count = counter
        self.points = {}
        self.last_point = ''

    def __str__(self):
        points = ';'.join(str(self.points[name]) for name in self.points)  # uses __str__ method of Point object
        return '@{}:{}:[{}]\n'.format(self.name, self.color, points).replace('[', '{').replace(']', '}')

    @property
    def counter(self):
        return self._count

    def _increment(self):
        self._count += 1

    def _decrement(self):
        self._count -= 1

    def add_point(self, x: int, y: int):
        name = self.namegen()
        self.points[name] = Point(name, x, y)
        self._increment()
        self.last_point = name

    def delete_point(self, name=''):
        if name in self.points:
            del(self.points[name])
            self._decrement()

    def namegen(self):
        key_set = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
        name = ""
        while name in self.points or not name:
            name = ''.join(key_set[n] for n in n_repeat(randint, 5, a=0, b=35)) 
        return name


class ObjectCounter:
    def __init__(self):
        self.MW = tkinter.Tk()
        self._zoom_factor = tkinter.DoubleVar(value=1.5)
        self.MW.minsize(600, 600)
        self.MW.protocol("WM_DELETE_WINDOW", self.stop)
        self.MW.title('Graphic Objects Counter')

        self.homedir = path.dirname(path.realpath(__file__)) + ('\\' if syst() == 'Windows' else '/')
        # ('Working directory: ', self.homedir)

        self.iconimg = tkinter.Image('photo', file='img' + ('\\' if syst() == 'Windows' else '/') + 'goc2.png')
        if syst() == 'Windows':
            self.MW.iconbitmap('img\\' + 'goc2.ico')
        elif syst() == 'Linux':
            self.MW.call('wm', 'iconphoto', self.MW._w, self.iconimg)

        self.left_frame = tkinter.Frame(self.MW)
        self.internal_frame = tkinter.Frame(self.left_frame, bg='green')
        self.h_scroll_frame = tkinter.Frame(self.left_frame)
        self.image_frame = tkinter.Frame(self.internal_frame)
        self.v_scroll_frame = tkinter.Frame(self.internal_frame)

        self.ctrl_frame = tkinter.Frame(self.MW, bg='red', width=420)
        self.btn_frame = tkinter.Frame(self.ctrl_frame)
        self.table_frame = tkinter.Frame(self.ctrl_frame)
        self.sec_btn_frame = tkinter.Frame(self.ctrl_frame)
        self.JpgCanvas = tkinter.Canvas(self.image_frame)
        self.xyentry = tkinter.Entry(self.JpgCanvas, text='check', justify='right', bg='silver', relief='flat',
                                     width=20)
        self.VertImgScroll = ttk.Scrollbar(self.v_scroll_frame, orient='vertical', command=self.JpgCanvas.yview)
        self.HorizImgScroll = ttk.Scrollbar(self.h_scroll_frame, orient='horizontal', command=self.JpgCanvas.xview)
        self.JpgCanvas.configure(yscrollcommand=self.VertImgScroll.set, xscrollcommand=self.HorizImgScroll.set,
                                 cursor="crosshair") # .cur"  if "Windows" in syst() else "crosshair")
        self.add_btn_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'plus.png')
        self.del_btn_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'minus.png')
        self.zoom_in_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'zoomin.png')
        self.zoom_out_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'zoomout.png')
        self.open_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'open.png')
        self.save_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'save.png')
        self.rest_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'restore.png')
        self.grid_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'grid.png')
        self.grid_color_img = tkinter.PhotoImage(file='img' + ('\\' if syst() == 'Windows' else '/') + 'grid_color.png')

        self.img_open_btn = ttk.Button(self.btn_frame, image=self.open_img, underline=0, command=self.load_btn_action)
        self.reg_marker_btn = ttk.Button(self.btn_frame, image=self.add_btn_img, command=self.add_btn_action)
        self.dereg_marker_btn = ttk.Button(self.btn_frame, image=self.del_btn_img, command=self.del_btn_action)
        self.zoom_in_btn = ttk.Button(self.btn_frame, image=self.zoom_in_img, command=self.zoom_in)
        self.zoom_out_btn = ttk.Button(self.btn_frame, image=self.zoom_out_img, command=self.zoom_out)
        self.zoom_bar = ttk.Scale(self.btn_frame, length=100, value=0.0, orient='horizontal',
                                  variable=self._zoom_factor, from_=1, to=3, command=self.show_zoom)
        self.zoom_factor_label = tkinter.Label(self.btn_frame, width=5, bg='white', foreground='green', takefocus=False,
                                               relief='sunken', font=('bold', 11))
        self.hint_label = tkinter.Label(self.table_frame, relief='groove', text='', foreground='blue', justify='left',
                                        anchor='w')

        self.marker_table = ttk.Treeview(self.table_frame)
        self.marker_table['columns'] = ('markname', 'markcount')

        self.save_markers_btn = ttk.Button(self.sec_btn_frame, image=self.save_img, command=self.save_markers)
        self.restore_markers_btn = ttk.Button(self.sec_btn_frame, image=self.rest_img, command=self.restore_markers)
        self.draw_grid_btn = ttk.Button(self.sec_btn_frame, image=self.grid_img, command=self.draw_grid_btn_action)
        self.grid_size_combo = ttk.Combobox(self.sec_btn_frame, width=5, justify='right', values=('50%', '40%', '30%',
                                                                                                  '33%', '20%', '25%',
                                                                                                  '10%', '5%',  '1%'))
        self.grid_color_btn = ttk.Button(self.sec_btn_frame, image=self.grid_color_img, command=self.grid_color_dialog)

        self.marker_table.column("#0", width=20, minwidth=20, stretch=tkinter.NO)
        self.marker_table.column("markname", width=200, minwidth=100, stretch=tkinter.NO)
        self.marker_table.column("markcount", width=50, minwidth=50, stretch=tkinter.NO)

        self.marker_table.heading("markname", text='Name', anchor='w')
        self.marker_table.heading("markcount", text='Count', anchor='w')

        self.scroll = ttk.Scrollbar(self.table_frame, command=self.marker_table.yview)
        self.marker_table.configure(yscrollcommand=self.scroll.set, selectmode='browse')

        self.ctrl_frame.pack(fill='y', expand=False, side='right')
        self.btn_frame.pack(fill='x', expand=False, side=tkinter.TOP, anchor='n')
        self.table_frame.pack(fill='both', expand=True, side=tkinter.TOP, anchor='n')
        self.sec_btn_frame.pack(fill='x', expand=False, side=tkinter.TOP, anchor='s')

        self.left_frame.pack(fill='both', expand=True, side='left')
        self.internal_frame.pack(fill='both', expand=True, side='top', anchor='nw')
        self.h_scroll_frame.pack(fill='x', expand=False, side='bottom', anchor='s')

        self.image_frame.pack(fill='both', expand=True, side='left')
        self.v_scroll_frame.pack(fill='y', expand=False, side='right')

        self.JpgCanvas.pack(fill='both', expand=True, side='top', anchor='n')
        self.xyentry.pack(expand=False, side='right', anchor='se')
        self.VertImgScroll.pack(fill='y', expand=True, side='left', anchor='e')
        self.HorizImgScroll.pack(fill='x', expand=True, side='bottom', anchor='s')

        self.img_open_btn.pack(side='left', fill='y', anchor='nw')
        self.reg_marker_btn.pack(side='right', anchor='e')
        self.dereg_marker_btn.pack(side='right', anchor='e')
        self.zoom_in_btn.pack(side='right', anchor='e')
        self.zoom_out_btn.pack(side='right', anchor='e')
        self.zoom_bar.pack(side='right', anchor='e')
        self.zoom_factor_label.pack(side='right', anchor='e')

        self.hint_label.pack(side='top', fill='x', expand='False', anchor='nw')
        self.marker_table.pack(side='left', fill='both', expand=True, anchor='w')
        self.scroll.pack(side='left', fill='y', expand=True, anchor='e')
        self.restore_markers_btn.pack(side='right')
        self.save_markers_btn.pack(side='right')
        self.draw_grid_btn.pack(side='left', anchor='w', padx=2)
        self.grid_color_btn.pack(side='left')
        self.grid_size_combo.pack(side='left', padx=2)

        # ============================== BINDS ======================================================================
        self.marker_table.bind('<<TreeviewSelect>>', self.marker_select)
        self.marker_table.bind('<Double-Button-1>', self.edit_mt_item)
        self.marker_table.bind('<Return>', self.edit_mt_item)

        self.img_open_btn.bind('<Enter>',
                               lambda x: self.hint_label.configure(text='Press to open some image (bmp, png or jpg)'))
        self.img_open_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.zoom_bar.bind('<Enter>', lambda x: self.hint_label.configure(text='Change zoom factor'))
        self.zoom_bar.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.reg_marker_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Press to add marker'))
        self.reg_marker_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.reg_marker_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Press to add marker'))
        self.reg_marker_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.dereg_marker_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Press to remove marker'))
        self.dereg_marker_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.zoom_in_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Press to zoom in image'))
        self.zoom_in_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.zoom_out_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Press to zoom out image'))
        self.zoom_out_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.zoom_factor_label.bind('<Enter>', lambda x: self.hint_label.configure(text='Indicate zoom factor'))
        self.zoom_factor_label.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.marker_table.bind('<Enter>', lambda x: self.hint_label.configure(text='Registered markers list '
                                                                                   '(click some to select)'))
        self.marker_table.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.draw_grid_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Draw/clear grid on image area'))
        self.draw_grid_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.grid_size_combo.bind('<Enter>', lambda x: self.hint_label.configure(text='Select grid cell size'))
        self.grid_size_combo.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.grid_color_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Select grid color'))
        self.grid_color_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.save_markers_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Save current sassion'))
        self.save_markers_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.restore_markers_btn.bind('<Enter>', lambda x: self.hint_label.configure(text='Restore saved session'))
        self.restore_markers_btn.bind('<Leave>', lambda x: self.hint_label.configure(text=''))

        self.JpgCanvas.bind('<B2-Motion>', self.scroll_canvas)
        self.JpgCanvas.bind('<Button-2>', self.store_mouse_pos)

        self.JpgCanvas.bind('<Button-1>', self.place_marker_point)
        self.JpgCanvas.bind('<Button-3>', self.remove_marker_points)

        self.JpgCanvas.bind('<Motion>', self.showxy)

        # ===========================================================================================================

        self.color_box = tkinter.Canvas(self.MW, bg='red')        
        self.buflabel = tkinter.Label(self.MW)
        
        """ странное поведение tkinter приводит к удалению всех "картиночных"
        объектов сборщиком мусора, из-за чего для отображения изображений
        после mainloop() необходимо сохранять ссылки на image объекты, эта Label именно
        для этого и служит: 
        When you add a PhotoImage or other Image object to a Tkinter widget, 
        you must keep your own reference to the image object. If you don’t, the 
        image won’t always show up. The problem is that the Tkinter/Tk interface 
        doesn’t handle references to Image objects properly; the Tk widget will 
        hold a reference to the internal object, but Tkinter does not. When 
        Python’s garbage collector discards the Tkinter object, Tkinter tells Tk 
        to release the image. But since the image is in use by a widget, Tk 
        does not destroy it. Not completely. It just blanks the image, making it 
        completely transparent… 
        The solution is to make sure to keep a reference to the Tkinter object, 
        for example by attaching it to a widget attribute: (C)"""

        self._markers = []
        self._act_mrk = ''  # name of selected marker
        self._file_name = ''
        self._actual_zoom = 1

        self.mouse_x = 0
        self.mouse_y = 0

        self._grid_var = StringVar()
        self._grid_color = ''
        
        self.all_saved = True

        self.grid_visible = False

    def start(self):
        value = int(self._zoom_factor.get() * 10) / 10
        self.zoom_factor_label.configure(text='x ' + str(value))
        self.save_markers_btn.configure(state='disabled' if len(self) == 0 else 'enabled')
        self.config_buttons()
        self.grid_size_combo.configure(textvariable=self._grid_var, state='readonly')
        self._grid_var.set('50%')
        self.MW.mainloop()

    def stop(self):
        ifexit = messagebox.askyesno('There are {} unsaved objects in the current session'.format(
            'no' if self.all_saved else 'some'), 'Do You want to stop Graphic Objects Counter?')
        if ifexit:
            self.MW.destroy()

    def __len__(self):
        return len(self._markers)

    def __contains__(self, value):
        return value in map(lambda x: x.name, self._markers)

    def __getitem__(self, key):
        if type(key) is str and key in self:
            return next(filter(lambda x: x.name == key, self._markers))
        elif type(key) is int and 0 <= key < len(self):
            return self._markers[key]
        else:
            raise IndexError

    def __iter__(self):  # returns iterator with Marker objects   
        return (marker for marker in self._markers)

    def _index_of(self, mark_name):
        new_tuple = tuple(map(lambda x: x.name, self._markers))
        if mark_name in new_tuple:
            return new_tuple.index(mark_name)
        else:
            raise KeyError

    def wipe(self):
        names = [m.name for m in self]
        for name in names:
            self.dereg_marker(name)
        self._act_mrk = ''

    def marker_select(self, _):
        self._act_mrk = self.marker_table.selection()[0]

    def grid_color_dialog(self):
        self._grid_color = cchoser.askcolor()[1]
        if not self._grid_color:
            self._grid_color = 'red'

    def draw_grid_btn_action(self):
        self.grid_visible = not self.grid_visible
        self.JpgCanvas.bind('<Configure>', self.redraw_grid)
        # print(self.grid_visible)
        if self._grid_color:
            self.draw_grid(color=self._grid_color)
        else:
            self.draw_grid()

    def redraw_grid(self, _):
        self.draw_grid()

    def draw_grid(self, color='red'):
        if self.grid_visible:

            self.JpgCanvas.delete('grid')
            ratio = int(self._grid_var.get().strip('%')) / 100
            canv_width = self.JpgCanvas.winfo_width()
            canv_height = self.JpgCanvas.winfo_height()
            wstep = canv_width * ratio
            hstep = canv_height * ratio

            wn = int(a_round(canv_width / wstep, template=0))
            hn = int(a_round(canv_height / hstep, template=0))

            horiz_lines = [(self.JpgCanvas.winfo_x() + wstep * i, self.JpgCanvas.winfo_y(),
                            self.JpgCanvas.winfo_x() + wstep * i, self.JpgCanvas.winfo_height()) for i in range(wn+1)]
            vert_lines = [(self.JpgCanvas.winfo_x(), self.JpgCanvas.winfo_y() + hstep * i,
                           self.JpgCanvas.winfo_width(), self.JpgCanvas.winfo_y() + hstep * i) for i in range(hn+1)]

            lines = horiz_lines + vert_lines
            for line in lines:
                self.JpgCanvas.create_line(int(line[0]), int(line[1]), int(line[2]), int(line[3]),
                                           fill=color, tags='grid')
        else:
            self.JpgCanvas.delete('grid')

    def reg_marker(self, name: str, color: str):  # register new marker
        mark_name = name
        c = 0
        init_name = mark_name
        while mark_name in self:
            c += 1
            mark_name = init_name + '.' + str(c)
        self._markers.append(Marker(mark_name, color, 0))
        self.all_saved = False
        self.config_buttons()
        return mark_name

    def dereg_marker(self, mark_name):
        self._markers.pop(self._index_of(mark_name))
        self.JpgCanvas.delete(mark_name)
        # self.clear_marker(mark_name)
        self.all_saved = False
        self.config_buttons()
        self.list_markers()

    def config_buttons(self):
        self.zoom_in_btn.configure(state='enabled' if self._file_name != '' else 'disabled')
        self.zoom_out_btn.configure(state='enabled' if self._file_name != '' else 'disabled')

        self.save_markers_btn.configure(state='disabled' if len(self) == 0 or self.all_saved else 'enabled')

    def list_markers(self):
        self.marker_table.delete(*self.marker_table.get_children())
        for marker in self._markers:
            mark_name, mark_color, mark_count = marker.name, marker.color, marker.counter
            self.marker_table.tag_bind(mark_color, sequence=None, callback=None)
            self.marker_table.tag_configure(mark_color, background=mark_color)
            self.marker_table.insert("", "end", mark_name, text="", values=(mark_name, mark_count), tags=(mark_color, ))

    def load_btn_action(self):
        formats = [('All acceptable formats', ('*.jpg', '*.jpeg', '*.bmp', '*.png', '*.gif')),
                   ('Jpeg files', ('*.jpg', '*.jpeg')), ('PNG files', '*.png'), ('BMP files', '*.bmp'),
                   ('Gif files', '*.gif')]
        filename = fd.askopenfilename(defaultextension='jpg', filetypes=formats)
        if filename:
            self._file_name = filename
            self._actual_zoom = 1
            self.show_image()
            self.wipe()

    def add_btn_action(self):
        marker_name = 'new_marker'
        marker_color = cchoser.askcolor()[1]
        if marker_color and marker_name:
            self.reg_marker(marker_name, marker_color)
            self.list_markers()

    def del_btn_action(self):
        if self.marker_table.selection():
            self.dereg_marker(self._act_mrk)
            self.list_markers()
            self._act_mrk = ''

    def edit_mt_item(self, _):
        if self.marker_table.selection():
            new_marker_name = 'all'
            while new_marker_name == 'all':
                new_marker_name = simd.askstring(title='Rename marker', prompt='Enter new name for choosen marker: ',
                                                 initialvalue=self._act_mrk, parent=self.table_frame)
            if new_marker_name:
                new_marker_name = strfilter(new_marker_name.replace(' ', '_'), sets=('LATIN', 'LINES', 'DIGITS'))
                self[self._act_mrk].name = new_marker_name
                self._act_mrk = new_marker_name
                self.list_markers()

    def show_image(self):
        photo_file = Image.open(self._file_name)
        height, width = photo_file.size
        new_height = int(height * self._actual_zoom)
        new_width = int(width * self._actual_zoom)
        photo_file = photo_file.resize((new_height, new_width), resample=Image.LANCZOS)
        renderer = ImageTk.PhotoImage(photo_file)
        self.buflabel.image = renderer  # сохраняем ссылку на объект, иначе после mainloop() изображение не сохранится

        self.JpgCanvas.delete('all')
        self.JpgCanvas.create_image(0, 0, image=renderer, anchor='nw')
        self.JpgCanvas.configure(scrollregion=(0, 0, renderer.width(), renderer.height()))

        self.config_buttons()

    def zoom_in(self):  # gui function
        zfactor = int(self._zoom_factor.get() * 10) / 10
        self.zoom(zf=zfactor)

    def zoom_out(self):  # gui function
        zfactor = 10 / int(self._zoom_factor.get() * 10)
        self.zoom(zf=zfactor)

    def zoom(self, zf=1.0):
        """
        :param zf: float  # factor used to scale image: new_zoom_factor  = self._actual_zoom * zf
        :return: None
        """
        new_zoom_factor = self._actual_zoom * zf
        if zf:
            self._actual_zoom = new_zoom_factor
            self.show_image()
            self.recalculate_points_positions(fold=zf)
            self.draw_marker(mode='all')
            self.config_buttons()

    def showxy(self, event):
        self.xyentry.delete('0', 'end')
        self.xyentry.insert('0', '{}x{} ({}x{})'.format(event.x, event.y, self.JpgCanvas.winfo_width(),
                                                        self.JpgCanvas.winfo_height()))

    def show_zoom(self, _):
        value = int(self._zoom_factor.get()*10)/10
        self.zoom_factor_label.configure(text='x ' + str(value))

    def store_mouse_pos(self, event):
        # self.mouse_x, self.mouse_y = event.x, event.y
        self.JpgCanvas.scan_mark(event.x, event.y)  # set init. x, y (to calc. delta later?) before mouse_scroll canvas

    def scroll_canvas(self, event):
        if self._file_name:
            self.JpgCanvas.scan_dragto(event.x, event.y, gain=1)

    def place_marker_point(self, event):
        canvas = event.widget
        actual_x = canvas.canvasx(event.x)
        actual_y = canvas.canvasy(event.y)  # получаем координаты на canvas (event.x & event.y - координаты на "окне")
        if self._file_name and self._act_mrk:
            self[self._act_mrk].add_point(actual_x, actual_y)
            self.draw_marker(m_name=self._act_mrk, mode='last')
            self.list_markers()
            self.all_saved = False
            self.config_buttons()

    def find_nearest(self, x=0, y=0):  # logic function
        distances = [(int(distance(mrk.points[pnt].x, x, mrk.points[pnt].y, y)),
                      (mrk.name, pnt)) for mrk in self for pnt in mrk.points]
        #  marker.points - словарь, проходим по именам точек = ключи словаря
        if distances:
            min_dist = min(i[0] for i in distances)
            return tuple(map(lambda a: a[1], filter(lambda b: b[0] == min_dist, distances)))
        else:
            return ()

    def delete_nearest(self, x=0, y=0):  # gui function
        nearest_points = self.find_nearest(x, y)
        for marker_name, point_name in nearest_points:
            px = self[marker_name].points[point_name].x
            py = self[marker_name].points[point_name].y
            cursor_dist = int(distance(x, px, y, py))
            if cursor_dist < 9:
                self[marker_name].delete_point(point_name)
                self.JpgCanvas.delete(marker_name)
                # self.clear_marker(marker_name)
                self.draw_marker(m_name=marker_name, mode='marker')

    def delete_covered(self, x=0, y=0, r=9):  # gui function (alternative)
        for marker in self:  # переопределенная итерация (возвращаемые значения - объекты Marker
            p_names = tuple(p_name for p_name in marker.points)
            # print(p_names)
            for p_name in p_names:
                px = marker.points[p_name].x
                py = marker.points[p_name].y
                dist = distance(x, px, y, py)
                if dist <= r:
                    marker.delete_point(p_name)
                    self.JpgCanvas.delete(marker.name)
                    # self.clear_marker(marker.name)
                    self.draw_marker(m_name=marker.name, mode='marker')

    def remove_marker_points(self, event):
        canvas = event.widget
        actual_x = canvas.canvasx(event.x)
        actual_y = canvas.canvasy(event.y)  # получаем координаты на canvas (event.x & event.y - координаты на "окне")
        # self.delete_nearest(actual_x, actual_y)
        self.delete_covered(actual_x, actual_y, r=9)
        self.list_markers()

    def draw_marker(self, m_name='', mode='marker'):
        """
        :param m_name: str  #  marker name
        :param mode: str  # could be: last - to draw only last point, 'marker' - all points of some marker (m_name)
                          # or 'all' - all points of all markers
        :return: None
        """
        draw_queue = {}
        if mode == 'marker':
            draw_queue[m_name] = [self[m_name].color] + [self[m_name].points[p_name] for p_name in self[m_name].points]
            # список объектов "точка" с x & Y
        elif mode == 'last':
            p_name = self[m_name].last_point
            draw_queue[m_name] = [self[m_name].color] + [self[m_name].points[p_name]]
        elif mode == 'all':
            for marker in self:
                draw_queue[marker.name] = [marker.color] + [marker.points[p_name] for p_name in marker.points]
        else:
            draw_queue = []
        for mrk_name in draw_queue:
            color = draw_queue[mrk_name][0]
            for point in draw_queue[mrk_name][1:]:
                self.JpgCanvas.create_oval(point.x - 3, point.y - 3, point.x + 3, point.y + 3, tags=mrk_name,
                                           fill=color)

    # def clear_marker(self, marker_name: str):
    #    self.JpgCanvas.delete(marker_name)

    def recalculate_points_positions(self, fold=1.0):  # ford - зум относит. "текущего" для точек (eg. х1,5 или x1/1,75)
        """
        :param fold: float  # factor used to recalculate coordinates of points (similarly as new_zoom_factor in zoom())
        :return: None
        """
        for marker in self:
            for p_name in marker.points:
                x, y = self[marker.name].points[p_name].coordinates
                self[marker.name].points[p_name].x = a_round(x * fold)
                self[marker.name].points[p_name].y = a_round(y * fold)
        self.all_saved = False

    def save_markers(self):
        filename = fd.asksaveasfilename(defaultextension='oc', filetypes=[('ObjectCounter saved sessions', ('*.oc',))])
        if filename:
            with open(filename, 'w', encoding='utf-8') as wfile:
                meta = '@METADATA:[ZOOMFACTOR:{}; FILENAME:{}]\n'.format(self._actual_zoom, self._file_name)
                meta = meta.replace('[', '{').replace(']', '}')
                wfile.write(meta)
                for marker in self:
                    wfile.write(str(marker))  # uses Marker.__str__()
                self.all_saved = True
                self.config_buttons()

    def restore_markers(self):
        filename = fd.askopenfilename()
        if filename:
            with open(filename, 'r') as lfile:
                try:
                    data = lfile.read()
                    meta, body = data.split('@', maxsplit=2)[1:]
                    
                    rzf = 0  # restored zoom factor
                    if 'ZOOMFACTOR:' in meta:
                        buffer = meta.split('ZOOMFACTOR:')[1]
                        value = buffer.split(';' if ';' in buffer else '}')[0]
                        if is_number(value):
                            rzf = float(value)
                    rfn = meta.split('FILENAME:')[1].split('}')[0] if 'FILENAME:' in meta else ''
                    # restored filename

                    ttl = 'The restored session implies a different image.'
                    answ = 'Implied image: {}.\nDo You want to restore this session?'.format(rfn)
                    sfname = path.split(rfn)[1]  # short filename (restored)
                    s_f_n = path.split(self._file_name)[1]  # short filename (opened earlier)

                    proceed = messagebox.askyesno(ttl, answ) if self._file_name and sfname != s_f_n else True
                    if proceed:
                        if rzf and rzf != self._actual_zoom and sfname == s_f_n:
                            self.zoom(zf=rzf/self._actual_zoom)

                        for line in body.split('@'):
                            name, color, pline = line.split(':')
                            coordinates = (c.split(',') for c in strfilter(pline, sets=('DIGITS', 'PUNCT')).split(';'))
                            new_name = self.reg_marker(name, color)
                            # в процессе регистрации маркера имя меняется и возвращается из функции
                            for x, y in coordinates:
                                self[new_name].add_point(int(x), int(y))
                            self.draw_marker(mode='all')
                        self.list_markers()
                        self.all_saved = False
                        self.config_buttons()
                except:
                    raise SyntaxError("Invalid file format or file could not be read.")


def main():
    """
    args = sys.argv
    if '-d' in args:
        doctest.run_docstring_examples(ObjectCounter.del_nearest_points, globals())
    else:
        ObjectCounter().start()
    """

    ObjectCounter().start()


if __name__ == "__main__":
    main()
