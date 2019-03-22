/* Generated code for Python module 'PIL.ImageColor'
 * created by Nuitka version 0.6.2
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_PIL$ImageColor" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageColor;
PyDictObject *moduledict_PIL$ImageColor;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_group;
static PyObject *const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple;
extern PyObject *const_str_plain_getcolor;
extern PyObject *const_int_neg_1;
static PyObject *const_slice_int_pos_3_int_pos_5_none;
static PyObject *const_tuple_str_plain_hls_to_rgb_tuple;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_34232f160b3f5a9ac4ccc214888716a8;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b5d0fa9449dfe6f17fd5f9caa5d70fde;
static PyObject *const_str_digest_396e31e89171c0c093bee3eef0c8dfa8;
static PyObject *const_str_digest_68e629b4c3541e0c7f7281c7843b3df3;
extern PyObject *const_int_pos_5;
extern PyObject *const_float_0_5;
static PyObject *const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_getmodebase;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_1fca22b5a766d033771be0b341a72bb9;
extern PyObject *const_str_plain_L;
static PyObject *const_int_pos_299;
static PyObject *const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_slice_int_0_int_pos_3_none;
static PyObject *const_str_digest_ea45e79450b1f4e95de9423fc114c839;
extern PyObject *const_str_plain_g;
static PyObject *const_str_plain_colorsys;
static PyObject *const_tuple_str_plain_hsv_to_rgb_tuple;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_float_360_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_float_100_0;
static PyObject *const_str_plain_hsv_to_rgb;
extern PyObject *const_str_plain_rgb;
static PyObject *const_str_digest_5df5c39c543feacbc20f40cf4218069c;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_match;
static PyObject *const_str_digest_1974e9c9378e907aa10e501e8280c12f;
static PyObject *const_str_digest_510d08a6042c84f798d290fc9693ba62;
static PyObject *const_str_digest_6ff38720cae99be6b1d7b1eebfcff638;
extern PyObject *const_tuple_str_plain_Image_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_getrgb;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1000;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_digest_f38dff559c7f3c807c14fcb91fa72782;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_hls_to_rgb;
static PyObject *const_str_plain_colormap;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3;
static PyObject *const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple;
static PyObject *const_int_pos_114;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_digest_07b4b3aac91b53df4ee72e370e02a279;
extern PyObject *const_int_pos_3;
static PyObject *const_slice_int_pos_5_int_pos_7_none;
extern PyObject *const_int_pos_255;
extern PyObject *const_slice_int_pos_1_int_pos_3_none;
static PyObject *const_int_pos_587;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_d509d230187696cf7e1c8418728500f6;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_Image;
extern PyObject *const_str_empty;
static PyObject *const_slice_int_pos_7_int_pos_9_none;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 0, const_str_plain_color ); Py_INCREF( const_str_plain_color );
    PyTuple_SET_ITEM( const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 1, const_str_plain_rgb ); Py_INCREF( const_str_plain_rgb );
    PyTuple_SET_ITEM( const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_hls_to_rgb = UNSTREAM_STRING_ASCII( &constant_bin[ 55729 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 3, const_str_plain_hls_to_rgb ); Py_INCREF( const_str_plain_hls_to_rgb );
    const_str_plain_hsv_to_rgb = UNSTREAM_STRING_ASCII( &constant_bin[ 55739 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 4, const_str_plain_hsv_to_rgb ); Py_INCREF( const_str_plain_hsv_to_rgb );
    const_slice_int_pos_3_int_pos_5_none = PySlice_New( const_int_pos_3, const_int_pos_5, Py_None );
    const_tuple_str_plain_hls_to_rgb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hls_to_rgb_tuple, 0, const_str_plain_hls_to_rgb ); Py_INCREF( const_str_plain_hls_to_rgb );
    const_str_digest_34232f160b3f5a9ac4ccc214888716a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 55749 ], 23, 0 );
    const_str_digest_b5d0fa9449dfe6f17fd5f9caa5d70fde = UNSTREAM_STRING_ASCII( &constant_bin[ 55772 ], 373, 0 );
    const_str_digest_396e31e89171c0c093bee3eef0c8dfa8 = UNSTREAM_STRING_ASCII( &constant_bin[ 55757 ], 14, 0 );
    const_str_digest_68e629b4c3541e0c7f7281c7843b3df3 = UNSTREAM_STRING_ASCII( &constant_bin[ 56145 ], 13, 0 );
    const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6 = UNSTREAM_STRING_ASCII( &constant_bin[ 56158 ], 63, 0 );
    const_str_digest_1fca22b5a766d033771be0b341a72bb9 = UNSTREAM_STRING_ASCII( &constant_bin[ 56221 ], 43, 0 );
    const_int_pos_299 = PyLong_FromUnsignedLong( 299ul );
    const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 56264 ], 2952 );
    const_slice_int_0_int_pos_3_none = PySlice_New( const_int_0, const_int_pos_3, Py_None );
    const_str_digest_ea45e79450b1f4e95de9423fc114c839 = UNSTREAM_STRING_ASCII( &constant_bin[ 59216 ], 17, 0 );
    const_str_plain_colorsys = UNSTREAM_STRING_ASCII( &constant_bin[ 59233 ], 8, 1 );
    const_tuple_str_plain_hsv_to_rgb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hsv_to_rgb_tuple, 0, const_str_plain_hsv_to_rgb ); Py_INCREF( const_str_plain_hsv_to_rgb );
    const_str_digest_5df5c39c543feacbc20f40cf4218069c = UNSTREAM_STRING_ASCII( &constant_bin[ 59241 ], 13, 0 );
    const_str_digest_1974e9c9378e907aa10e501e8280c12f = UNSTREAM_STRING_ASCII( &constant_bin[ 59254 ], 66, 0 );
    const_str_digest_510d08a6042c84f798d290fc9693ba62 = UNSTREAM_STRING_ASCII( &constant_bin[ 59320 ], 250, 0 );
    const_str_digest_6ff38720cae99be6b1d7b1eebfcff638 = UNSTREAM_STRING_ASCII( &constant_bin[ 59570 ], 13, 0 );
    const_str_plain_colormap = UNSTREAM_STRING_ASCII( &constant_bin[ 59583 ], 8, 1 );
    const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3 = UNSTREAM_STRING_ASCII( &constant_bin[ 59591 ], 56, 0 );
    const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 0, const_str_plain_color ); Py_INCREF( const_str_plain_color );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 2, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 4, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 5, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_int_pos_114 = PyLong_FromUnsignedLong( 114ul );
    const_str_digest_07b4b3aac91b53df4ee72e370e02a279 = UNSTREAM_STRING_ASCII( &constant_bin[ 59647 ], 46, 0 );
    const_slice_int_pos_5_int_pos_7_none = PySlice_New( const_int_pos_5, const_int_pos_7, Py_None );
    const_int_pos_587 = PyLong_FromUnsignedLong( 587ul );
    const_str_digest_d509d230187696cf7e1c8418728500f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 59693 ], 13, 0 );
    const_slice_int_pos_7_int_pos_9_none = PySlice_New( const_int_pos_7, const_int_pos_9, Py_None );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$ImageColor( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ba86c6df1ae79198a6b702c35ee8e2c2;
static PyCodeObject *codeobj_fa2b1cf32a93c08909c92c3d3f4208ea;
static PyCodeObject *codeobj_aebd1d947fe6995f9bc379f80193f8a9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ea45e79450b1f4e95de9423fc114c839 );
    codeobj_ba86c6df1ae79198a6b702c35ee8e2c2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_34232f160b3f5a9ac4ccc214888716a8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fa2b1cf32a93c08909c92c3d3f4208ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getcolor, 136, const_tuple_9e80ec3ef94cdf1cc988fd678fe5c744_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aebd1d947fe6995f9bc379f80193f8a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getrgb, 24, const_tuple_4ccb0152d7e0b11ad44bb74ecd9f68c7_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function_1_getrgb(  );


static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function_2_getcolor(  );


// The module function definitions.
static PyObject *impl_PIL$ImageColor$$$function_1_getrgb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_color = python_pars[ 0 ];
    PyObject *var_rgb = NULL;
    PyObject *var_m = NULL;
    PyObject *var_hls_to_rgb = NULL;
    PyObject *var_hsv_to_rgb = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_aebd1d947fe6995f9bc379f80193f8a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_aebd1d947fe6995f9bc379f80193f8a9 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aebd1d947fe6995f9bc379f80193f8a9, codeobj_aebd1d947fe6995f9bc379f80193f8a9, module_PIL$ImageColor, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aebd1d947fe6995f9bc379f80193f8a9 = cache_frame_aebd1d947fe6995f9bc379f80193f8a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aebd1d947fe6995f9bc379f80193f8a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aebd1d947fe6995f9bc379f80193f8a9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_color );
        tmp_called_instance_1 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 34;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_color;
            assert( old != NULL );
            par_color = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_colormap );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_colormap );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "colormap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_1 = par_color;
        tmp_args_element_name_2 = Py_None;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rgb == NULL );
        var_rgb = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_rgb );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_rgb );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( var_rgb );
            tmp_isinstance_inst_1 = var_rgb;
            tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            CHECK_OBJECT( var_rgb );
            tmp_return_value = var_rgb;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_2:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_getrgb );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getrgb );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getrgb" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 40;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_rgb );
            tmp_args_element_name_3 = var_rgb;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( tmp_assign_unpack_1__assign_source == NULL );
            tmp_assign_unpack_1__assign_source = tmp_assign_source_3;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_colormap );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_colormap );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "colormap" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 40;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_ass_subscribed_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_color );
            tmp_ass_subscript_1 = par_color;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_assign_unpack_1__assign_source );
        tmp_assign_unpack_1__assign_source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_assign_source_4 = tmp_assign_unpack_1__assign_source;
            {
                PyObject *old = var_rgb;
                assert( old != NULL );
                var_rgb = tmp_assign_source_4;
                Py_INCREF( var_rgb );
                Py_DECREF( old );
            }

        }
        CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
        Py_DECREF( tmp_assign_unpack_1__assign_source );
        tmp_assign_unpack_1__assign_source = NULL;

        CHECK_OBJECT( var_rgb );
        tmp_return_value = var_rgb;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        tmp_args_element_name_4 = const_str_digest_6ff38720cae99be6b1d7b1eebfcff638;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_5 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_match, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_value_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_base_name_1;
            PyObject *tmp_value_name_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_base_name_2;
            PyObject *tmp_value_name_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_base_name_3;
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_1 = par_color;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_2;
            tmp_value_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_value_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_1 = const_int_pos_16;
            tmp_tuple_element_1 = BUILTIN_INT2( tmp_value_name_1, tmp_base_name_1 );
            Py_DECREF( tmp_value_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_2 = par_color;
            tmp_subscript_name_2 = const_int_pos_2;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_value_name_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_value_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_2 = const_int_pos_16;
            tmp_tuple_element_1 = BUILTIN_INT2( tmp_value_name_2, tmp_base_name_2 );
            Py_DECREF( tmp_value_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 47;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_3 = par_color;
            tmp_subscript_name_3 = const_int_pos_3;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_int_pos_2;
            tmp_value_name_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_value_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_3 = const_int_pos_16;
            tmp_tuple_element_1 = BUILTIN_INT2( tmp_value_name_3, tmp_base_name_3 );
            Py_DECREF( tmp_value_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        int tmp_truth_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        tmp_args_element_name_6 = const_str_digest_68e629b4c3541e0c7f7281c7843b3df3;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_7 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_match, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_value_name_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_base_name_4;
            PyObject *tmp_value_name_5;
            PyObject *tmp_left_name_5;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_base_name_5;
            PyObject *tmp_value_name_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_base_name_6;
            PyObject *tmp_value_name_7;
            PyObject *tmp_left_name_7;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_base_name_7;
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_4 = par_color;
            tmp_subscript_name_4 = const_int_pos_1;
            tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_2;
            tmp_value_name_4 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_value_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_4 = const_int_pos_16;
            tmp_tuple_element_2 = BUILTIN_INT2( tmp_value_name_4, tmp_base_name_4 );
            Py_DECREF( tmp_value_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_5 = par_color;
            tmp_subscript_name_5 = const_int_pos_2;
            tmp_left_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 2 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 54;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_5 = const_int_pos_2;
            tmp_value_name_5 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_value_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 54;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_5 = const_int_pos_16;
            tmp_tuple_element_2 = BUILTIN_INT2( tmp_value_name_5, tmp_base_name_5 );
            Py_DECREF( tmp_value_name_5 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 54;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_6 = par_color;
            tmp_subscript_name_6 = const_int_pos_3;
            tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 3 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_2;
            tmp_value_name_6 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_value_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_6 = const_int_pos_16;
            tmp_tuple_element_2 = BUILTIN_INT2( tmp_value_name_6, tmp_base_name_6 );
            Py_DECREF( tmp_value_name_6 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_7 = par_color;
            tmp_subscript_name_7 = const_int_pos_4;
            tmp_left_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 4 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 56;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = const_int_pos_2;
            tmp_value_name_7 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_value_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 56;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_7 = const_int_pos_16;
            tmp_tuple_element_2 = BUILTIN_INT2( tmp_value_name_7, tmp_base_name_7 );
            Py_DECREF( tmp_value_name_7 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 56;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        int tmp_truth_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_6;
        tmp_args_element_name_8 = const_str_digest_5df5c39c543feacbc20f40cf4218069c;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_9 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_match, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_value_name_8;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_base_name_8;
            PyObject *tmp_value_name_9;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_base_name_9;
            PyObject *tmp_value_name_10;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_base_name_10;
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_8 = par_color;
            tmp_subscript_name_8 = const_slice_int_pos_1_int_pos_3_none;
            tmp_value_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_value_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_8 = const_int_pos_16;
            tmp_tuple_element_3 = BUILTIN_INT2( tmp_value_name_8, tmp_base_name_8 );
            Py_DECREF( tmp_value_name_8 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_9 = par_color;
            tmp_subscript_name_9 = const_slice_int_pos_3_int_pos_5_none;
            tmp_value_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_value_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 62;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_9 = const_int_pos_16;
            tmp_tuple_element_3 = BUILTIN_INT2( tmp_value_name_9, tmp_base_name_9 );
            Py_DECREF( tmp_value_name_9 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 62;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_10 = par_color;
            tmp_subscript_name_10 = const_slice_int_pos_5_int_pos_7_none;
            tmp_value_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            if ( tmp_value_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 63;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_10 = const_int_pos_16;
            tmp_tuple_element_3 = BUILTIN_INT2( tmp_value_name_10, tmp_base_name_10 );
            Py_DECREF( tmp_value_name_10 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 63;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
            goto frame_return_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        int tmp_truth_name_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_7;
        tmp_args_element_name_10 = const_str_digest_d509d230187696cf7e1c8418728500f6;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_11 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_match, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_value_name_11;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_base_name_11;
            PyObject *tmp_value_name_12;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_base_name_12;
            PyObject *tmp_value_name_13;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_base_name_13;
            PyObject *tmp_value_name_14;
            PyObject *tmp_subscribed_name_14;
            PyObject *tmp_subscript_name_14;
            PyObject *tmp_base_name_14;
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_11 = par_color;
            tmp_subscript_name_11 = const_slice_int_pos_1_int_pos_3_none;
            tmp_value_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_value_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_11 = const_int_pos_16;
            tmp_tuple_element_4 = BUILTIN_INT2( tmp_value_name_11, tmp_base_name_11 );
            Py_DECREF( tmp_value_name_11 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_12 = par_color;
            tmp_subscript_name_12 = const_slice_int_pos_3_int_pos_5_none;
            tmp_value_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            if ( tmp_value_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 69;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_12 = const_int_pos_16;
            tmp_tuple_element_4 = BUILTIN_INT2( tmp_value_name_12, tmp_base_name_12 );
            Py_DECREF( tmp_value_name_12 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 69;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_13 = par_color;
            tmp_subscript_name_13 = const_slice_int_pos_5_int_pos_7_none;
            tmp_value_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
            if ( tmp_value_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 70;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_13 = const_int_pos_16;
            tmp_tuple_element_4 = BUILTIN_INT2( tmp_value_name_13, tmp_base_name_13 );
            Py_DECREF( tmp_value_name_13 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 70;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_14 = par_color;
            tmp_subscript_name_14 = const_slice_int_pos_7_int_pos_9_none;
            tmp_value_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
            if ( tmp_value_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 71;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_base_name_14 = const_int_pos_16;
            tmp_tuple_element_4 = BUILTIN_INT2( tmp_value_name_14, tmp_base_name_14 );
            Py_DECREF( tmp_value_name_14 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 71;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_4 );
            goto frame_return_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_8;
        tmp_args_element_name_12 = const_str_digest_1fca22b5a766d033771be0b341a72bb9;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_13 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_6;
        CHECK_OBJECT( var_m );
        tmp_truth_name_6 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_int_arg_3;
            PyObject *tmp_called_instance_10;
            CHECK_OBJECT( var_m );
            tmp_called_instance_8 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 77;
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_9 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 78;
            tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 78;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 78;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_10 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 79;
            tmp_int_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_int_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 79;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = PyNumber_Int( tmp_int_arg_3 );
            Py_DECREF( tmp_int_arg_3 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 79;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
            goto frame_return_exit_1;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_9;
        tmp_args_element_name_14 = const_str_digest_07b4b3aac91b53df4ee72e370e02a279;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_15 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_11, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_7;
        CHECK_OBJECT( var_m );
        tmp_truth_name_7 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_int_arg_4;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_int_arg_5;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_int_arg_6;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_int_arg_7;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            PyObject *tmp_right_name_13;
            PyObject *tmp_int_arg_8;
            PyObject *tmp_left_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_int_arg_9;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_right_name_15;
            PyObject *tmp_right_name_16;
            CHECK_OBJECT( var_m );
            tmp_called_instance_12 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 85;
            tmp_int_arg_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_int_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_10 = PyNumber_Int( tmp_int_arg_5 );
            Py_DECREF( tmp_int_arg_5 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = const_int_pos_255;
            tmp_left_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_10 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_9 = const_float_100_0;
            tmp_left_name_8 = BINARY_OPERATION_TRUEDIV( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_10 = const_float_0_5;
            tmp_int_arg_4 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_8, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_int_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_6 = PyNumber_Int( tmp_int_arg_4 );
            Py_DECREF( tmp_int_arg_4 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_13 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 86;
            tmp_int_arg_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_int_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_13 = PyNumber_Int( tmp_int_arg_7 );
            Py_DECREF( tmp_int_arg_7 );
            if ( tmp_left_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_11 = const_int_pos_255;
            tmp_left_name_12 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_13 );
            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_12 = const_float_100_0;
            tmp_left_name_11 = BINARY_OPERATION_TRUEDIV( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_12 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_13 = const_float_0_5;
            tmp_int_arg_6 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_11, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_int_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_6 = PyNumber_Int( tmp_int_arg_6 );
            Py_DECREF( tmp_int_arg_6 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 86;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_14 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 87;
            tmp_int_arg_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_int_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_16 = PyNumber_Int( tmp_int_arg_9 );
            Py_DECREF( tmp_int_arg_9 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_14 = const_int_pos_255;
            tmp_left_name_15 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_14 );
            Py_DECREF( tmp_left_name_16 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_15 = const_float_100_0;
            tmp_left_name_14 = BINARY_OPERATION_TRUEDIV( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_16 = const_float_0_5;
            tmp_int_arg_8 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_14, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_14 );
            if ( tmp_int_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_6 = PyNumber_Int( tmp_int_arg_8 );
            Py_DECREF( tmp_int_arg_8 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
            goto frame_return_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = tmp_mvar_value_10;
        tmp_args_element_name_16 = const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_17 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_15, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_8;
        CHECK_OBJECT( var_m );
        tmp_truth_name_8 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_colorsys;
            tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageColor;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_hls_to_rgb_tuple;
            tmp_level_name_1 = const_int_0;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 95;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_hls_to_rgb );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_hls_to_rgb == NULL );
            var_hls_to_rgb = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_left_name_17;
            PyObject *tmp_float_arg_1;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_right_name_17;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_left_name_18;
            PyObject *tmp_float_arg_2;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_right_name_18;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_left_name_19;
            PyObject *tmp_float_arg_3;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_right_name_19;
            CHECK_OBJECT( var_hls_to_rgb );
            tmp_called_name_2 = var_hls_to_rgb;
            CHECK_OBJECT( var_m );
            tmp_called_instance_16 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 97;
            tmp_float_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_float_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_17 = TO_FLOAT( tmp_float_arg_1 );
            Py_DECREF( tmp_float_arg_1 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_17 = const_float_360_0;
            tmp_args_element_name_18 = BINARY_OPERATION_TRUEDIV( tmp_left_name_17, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_17 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_called_instance_17 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 98;
            tmp_float_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_float_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );

                exception_lineno = 98;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_18 = TO_FLOAT( tmp_float_arg_2 );
            Py_DECREF( tmp_float_arg_2 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );

                exception_lineno = 98;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_18 = const_float_100_0;
            tmp_args_element_name_19 = BINARY_OPERATION_TRUEDIV( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_18 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );

                exception_lineno = 98;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_called_instance_18 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 99;
            tmp_float_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_float_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );
                Py_DECREF( tmp_args_element_name_19 );

                exception_lineno = 99;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_19 = TO_FLOAT( tmp_float_arg_3 );
            Py_DECREF( tmp_float_arg_3 );
            if ( tmp_left_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );
                Py_DECREF( tmp_args_element_name_19 );

                exception_lineno = 99;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_19 = const_float_100_0;
            tmp_args_element_name_20 = BINARY_OPERATION_TRUEDIV( tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_left_name_19 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_18 );
                Py_DECREF( tmp_args_element_name_19 );

                exception_lineno = 99;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 96;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_18 );
            Py_DECREF( tmp_args_element_name_19 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_rgb;
                assert( old != NULL );
                var_rgb = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_int_arg_10;
            PyObject *tmp_left_name_20;
            PyObject *tmp_left_name_21;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_right_name_20;
            PyObject *tmp_right_name_21;
            PyObject *tmp_int_arg_11;
            PyObject *tmp_left_name_22;
            PyObject *tmp_left_name_23;
            PyObject *tmp_subscribed_name_16;
            PyObject *tmp_subscript_name_16;
            PyObject *tmp_right_name_22;
            PyObject *tmp_right_name_23;
            PyObject *tmp_int_arg_12;
            PyObject *tmp_left_name_24;
            PyObject *tmp_left_name_25;
            PyObject *tmp_subscribed_name_17;
            PyObject *tmp_subscript_name_17;
            PyObject *tmp_right_name_24;
            PyObject *tmp_right_name_25;
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_15 = var_rgb;
            tmp_subscript_name_15 = const_int_0;
            tmp_left_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
            if ( tmp_left_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_20 = const_int_pos_255;
            tmp_left_name_20 = BINARY_OPERATION_MUL( tmp_left_name_21, tmp_right_name_20 );
            Py_DECREF( tmp_left_name_21 );
            if ( tmp_left_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_21 = const_float_0_5;
            tmp_int_arg_10 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_20, tmp_right_name_21 );
            Py_DECREF( tmp_left_name_20 );
            if ( tmp_int_arg_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_7 = PyNumber_Int( tmp_int_arg_10 );
            Py_DECREF( tmp_int_arg_10 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_16 = var_rgb;
            tmp_subscript_name_16 = const_int_pos_1;
            tmp_left_name_23 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, 1 );
            if ( tmp_left_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_22 = const_int_pos_255;
            tmp_left_name_22 = BINARY_OPERATION_MUL( tmp_left_name_23, tmp_right_name_22 );
            Py_DECREF( tmp_left_name_23 );
            if ( tmp_left_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_23 = const_float_0_5;
            tmp_int_arg_11 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_22, tmp_right_name_23 );
            Py_DECREF( tmp_left_name_22 );
            if ( tmp_int_arg_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_7 = PyNumber_Int( tmp_int_arg_11 );
            Py_DECREF( tmp_int_arg_11 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_17 = var_rgb;
            tmp_subscript_name_17 = const_int_pos_2;
            tmp_left_name_25 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, 2 );
            if ( tmp_left_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_24 = const_int_pos_255;
            tmp_left_name_24 = BINARY_OPERATION_MUL( tmp_left_name_25, tmp_right_name_24 );
            Py_DECREF( tmp_left_name_25 );
            if ( tmp_left_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_25 = const_float_0_5;
            tmp_int_arg_12 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_24, tmp_right_name_25 );
            Py_DECREF( tmp_left_name_24 );
            if ( tmp_int_arg_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_7 = PyNumber_Int( tmp_int_arg_12 );
            Py_DECREF( tmp_int_arg_12 );
            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_7 );
            goto frame_return_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_19 = tmp_mvar_value_11;
        tmp_args_element_name_21 = const_str_digest_1974e9c9378e907aa10e501e8280c12f;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_22 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_19, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_9;
        CHECK_OBJECT( var_m );
        tmp_truth_name_9 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_9 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_colorsys;
            tmp_globals_name_2 = (PyObject *)moduledict_PIL$ImageColor;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_hsv_to_rgb_tuple;
            tmp_level_name_2 = const_int_0;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 112;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_hsv_to_rgb );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_hsv_to_rgb == NULL );
            var_hsv_to_rgb = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_left_name_26;
            PyObject *tmp_float_arg_4;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_right_name_26;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_left_name_27;
            PyObject *tmp_float_arg_5;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_right_name_27;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_left_name_28;
            PyObject *tmp_float_arg_6;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_right_name_28;
            CHECK_OBJECT( var_hsv_to_rgb );
            tmp_called_name_3 = var_hsv_to_rgb;
            CHECK_OBJECT( var_m );
            tmp_called_instance_20 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 114;
            tmp_float_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_float_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_26 = TO_FLOAT( tmp_float_arg_4 );
            Py_DECREF( tmp_float_arg_4 );
            if ( tmp_left_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_26 = const_float_360_0;
            tmp_args_element_name_23 = BINARY_OPERATION_TRUEDIV( tmp_left_name_26, tmp_right_name_26 );
            Py_DECREF( tmp_left_name_26 );
            if ( tmp_args_element_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_called_instance_21 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 115;
            tmp_float_arg_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_float_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );

                exception_lineno = 115;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_27 = TO_FLOAT( tmp_float_arg_5 );
            Py_DECREF( tmp_float_arg_5 );
            if ( tmp_left_name_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );

                exception_lineno = 115;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_27 = const_float_100_0;
            tmp_args_element_name_24 = BINARY_OPERATION_TRUEDIV( tmp_left_name_27, tmp_right_name_27 );
            Py_DECREF( tmp_left_name_27 );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );

                exception_lineno = 115;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_m );
            tmp_called_instance_22 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 116;
            tmp_float_arg_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_float_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_28 = TO_FLOAT( tmp_float_arg_6 );
            Py_DECREF( tmp_float_arg_6 );
            if ( tmp_left_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_28 = const_float_100_0;
            tmp_args_element_name_25 = BINARY_OPERATION_TRUEDIV( tmp_left_name_28, tmp_right_name_28 );
            Py_DECREF( tmp_left_name_28 );
            if ( tmp_args_element_name_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_23 );
                Py_DECREF( tmp_args_element_name_24 );

                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_23 );
            Py_DECREF( tmp_args_element_name_24 );
            Py_DECREF( tmp_args_element_name_25 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_rgb;
                assert( old != NULL );
                var_rgb = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_int_arg_13;
            PyObject *tmp_left_name_29;
            PyObject *tmp_left_name_30;
            PyObject *tmp_subscribed_name_18;
            PyObject *tmp_subscript_name_18;
            PyObject *tmp_right_name_29;
            PyObject *tmp_right_name_30;
            PyObject *tmp_int_arg_14;
            PyObject *tmp_left_name_31;
            PyObject *tmp_left_name_32;
            PyObject *tmp_subscribed_name_19;
            PyObject *tmp_subscript_name_19;
            PyObject *tmp_right_name_31;
            PyObject *tmp_right_name_32;
            PyObject *tmp_int_arg_15;
            PyObject *tmp_left_name_33;
            PyObject *tmp_left_name_34;
            PyObject *tmp_subscribed_name_20;
            PyObject *tmp_subscript_name_20;
            PyObject *tmp_right_name_33;
            PyObject *tmp_right_name_34;
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_18 = var_rgb;
            tmp_subscript_name_18 = const_int_0;
            tmp_left_name_30 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, 0 );
            if ( tmp_left_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_29 = const_int_pos_255;
            tmp_left_name_29 = BINARY_OPERATION_MUL( tmp_left_name_30, tmp_right_name_29 );
            Py_DECREF( tmp_left_name_30 );
            if ( tmp_left_name_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_30 = const_float_0_5;
            tmp_int_arg_13 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_29, tmp_right_name_30 );
            Py_DECREF( tmp_left_name_29 );
            if ( tmp_int_arg_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = PyNumber_Int( tmp_int_arg_13 );
            Py_DECREF( tmp_int_arg_13 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_19 = var_rgb;
            tmp_subscript_name_19 = const_int_pos_1;
            tmp_left_name_32 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 1 );
            if ( tmp_left_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_31 = const_int_pos_255;
            tmp_left_name_31 = BINARY_OPERATION_MUL( tmp_left_name_32, tmp_right_name_31 );
            Py_DECREF( tmp_left_name_32 );
            if ( tmp_left_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_32 = const_float_0_5;
            tmp_int_arg_14 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_31, tmp_right_name_32 );
            Py_DECREF( tmp_left_name_31 );
            if ( tmp_int_arg_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = PyNumber_Int( tmp_int_arg_14 );
            Py_DECREF( tmp_int_arg_14 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( var_rgb );
            tmp_subscribed_name_20 = var_rgb;
            tmp_subscript_name_20 = const_int_pos_2;
            tmp_left_name_34 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 2 );
            if ( tmp_left_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 121;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_33 = const_int_pos_255;
            tmp_left_name_33 = BINARY_OPERATION_MUL( tmp_left_name_34, tmp_right_name_33 );
            Py_DECREF( tmp_left_name_34 );
            if ( tmp_left_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 121;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_34 = const_float_0_5;
            tmp_int_arg_15 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_33, tmp_right_name_34 );
            Py_DECREF( tmp_left_name_33 );
            if ( tmp_int_arg_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 121;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = PyNumber_Int( tmp_int_arg_15 );
            Py_DECREF( tmp_int_arg_15 );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 121;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_8 );
            goto frame_return_exit_1;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_23 = tmp_mvar_value_12;
        tmp_args_element_name_26 = const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_27 = par_color;
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_23, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_10;
        CHECK_OBJECT( var_m );
        tmp_truth_name_10 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_10 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_int_arg_16;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_int_arg_17;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_int_arg_18;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_int_arg_19;
            PyObject *tmp_called_instance_27;
            CHECK_OBJECT( var_m );
            tmp_called_instance_24 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 128;
            tmp_int_arg_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_int_arg_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_9 = PyNumber_Int( tmp_int_arg_16 );
            Py_DECREF( tmp_int_arg_16 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_25 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 129;
            tmp_int_arg_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_int_arg_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 129;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_9 = PyNumber_Int( tmp_int_arg_17 );
            Py_DECREF( tmp_int_arg_17 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 129;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_9 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_26 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 130;
            tmp_int_arg_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_int_arg_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 130;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_9 = PyNumber_Int( tmp_int_arg_18 );
            Py_DECREF( tmp_int_arg_18 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 130;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( var_m );
            tmp_called_instance_27 = var_m;
            frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 131;
            tmp_int_arg_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

            if ( tmp_int_arg_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 131;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_9 = PyNumber_Int( tmp_int_arg_19 );
            Py_DECREF( tmp_int_arg_19 );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 131;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_9 );
            goto frame_return_exit_1;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_35;
        tmp_left_name_35 = const_str_digest_f38dff559c7f3c807c14fcb91fa72782;
        CHECK_OBJECT( par_color );
        tmp_right_name_35 = par_color;
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_35, tmp_right_name_35 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 133;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aebd1d947fe6995f9bc379f80193f8a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aebd1d947fe6995f9bc379f80193f8a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aebd1d947fe6995f9bc379f80193f8a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aebd1d947fe6995f9bc379f80193f8a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aebd1d947fe6995f9bc379f80193f8a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aebd1d947fe6995f9bc379f80193f8a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aebd1d947fe6995f9bc379f80193f8a9,
        type_description_1,
        par_color,
        var_rgb,
        var_m,
        var_hls_to_rgb,
        var_hsv_to_rgb
    );


    // Release cached frame.
    if ( frame_aebd1d947fe6995f9bc379f80193f8a9 == cache_frame_aebd1d947fe6995f9bc379f80193f8a9 )
    {
        Py_DECREF( frame_aebd1d947fe6995f9bc379f80193f8a9 );
    }
    cache_frame_aebd1d947fe6995f9bc379f80193f8a9 = NULL;

    assertFrameObject( frame_aebd1d947fe6995f9bc379f80193f8a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageColor$$$function_1_getrgb );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_color );
    Py_DECREF( par_color );
    par_color = NULL;

    CHECK_OBJECT( (PyObject *)var_rgb );
    Py_DECREF( var_rgb );
    var_rgb = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_hls_to_rgb );
    var_hls_to_rgb = NULL;

    Py_XDECREF( var_hsv_to_rgb );
    var_hsv_to_rgb = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_color );
    Py_DECREF( par_color );
    par_color = NULL;

    Py_XDECREF( var_rgb );
    var_rgb = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_hls_to_rgb );
    var_hls_to_rgb = NULL;

    Py_XDECREF( var_hsv_to_rgb );
    var_hsv_to_rgb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageColor$$$function_1_getrgb );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageColor$$$function_2_getcolor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_color = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *var_alpha = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fa2b1cf32a93c08909c92c3d3f4208ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fa2b1cf32a93c08909c92c3d3f4208ea = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa2b1cf32a93c08909c92c3d3f4208ea, codeobj_fa2b1cf32a93c08909c92c3d3f4208ea, module_PIL$ImageColor, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa2b1cf32a93c08909c92c3d3f4208ea = cache_frame_fa2b1cf32a93c08909c92c3d3f4208ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa2b1cf32a93c08909c92c3d3f4208ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa2b1cf32a93c08909c92c3d3f4208ea ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_getrgb );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getrgb );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getrgb" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_color );
        tmp_args_element_name_1 = par_color;
        frame_fa2b1cf32a93c08909c92c3d3f4208ea->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_255;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_color;
            assert( old != NULL );
            par_color = tmp_assign_source_4;
            Py_INCREF( par_color );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_alpha = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_color );
        tmp_len_arg_1 = par_color;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_1 = par_color;
            tmp_subscript_name_1 = const_slice_int_0_int_pos_3_none;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_color );
            tmp_subscribed_name_2 = par_color;
            tmp_subscript_name_2 = const_int_pos_3;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 3 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 150;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
            if ( tmp_assign_source_7 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooo";
                exception_lineno = 150;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooo";
                exception_lineno = 150;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = par_color;
                assert( old != NULL );
                par_color = tmp_assign_source_9;
                Py_INCREF( par_color );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_alpha;
                assert( old != NULL );
                var_alpha = tmp_assign_source_10;
                Py_INCREF( var_alpha );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_Image );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Image" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_mode );
        tmp_args_element_name_2 = par_mode;
        frame_fa2b1cf32a93c08909c92c3d3f4208ea->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getmodebase, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_L;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_color );
            tmp_iter_arg_3 = par_color;
            tmp_assign_source_11 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
            if ( tmp_assign_source_12 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooo";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
            if ( tmp_assign_source_13 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooo";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "oooooo";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "oooooo";
                        exception_lineno = 153;
                        goto try_except_handler_7;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooo";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_15 = tmp_tuple_unpack_3__element_1;
            assert( var_r == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_r = tmp_assign_source_15;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_16 = tmp_tuple_unpack_3__element_2;
            assert( var_g == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_g = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_17 = tmp_tuple_unpack_3__element_3;
            assert( var_b == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_b = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_r );
            tmp_left_name_4 = var_r;
            tmp_right_name_1 = const_int_pos_299;
            tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_1 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_g );
            tmp_left_name_5 = var_g;
            tmp_right_name_3 = const_int_pos_587;
            tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_b );
            tmp_left_name_6 = var_b;
            tmp_right_name_5 = const_int_pos_114;
            tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_1000;
            tmp_assign_source_18 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_color;
                assert( old != NULL );
                par_color = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_mode );
            tmp_subscribed_name_3 = par_mode;
            tmp_subscript_name_3 = const_int_neg_1;
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_str_plain_A;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_tuple_element_3;
                CHECK_OBJECT( par_color );
                tmp_tuple_element_3 = par_color;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( var_alpha );
                tmp_tuple_element_3 = var_alpha;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( par_mode );
            tmp_subscribed_name_4 = par_mode;
            tmp_subscript_name_4 = const_int_neg_1;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_str_plain_A;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_4;
                CHECK_OBJECT( par_color );
                tmp_left_name_7 = par_color;
                CHECK_OBJECT( var_alpha );
                tmp_tuple_element_4 = var_alpha;
                tmp_right_name_7 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_4 );
                tmp_return_value = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_4:;
        }
        branch_end_2:;
    }
    if ( par_color == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "color" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_color;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa2b1cf32a93c08909c92c3d3f4208ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa2b1cf32a93c08909c92c3d3f4208ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa2b1cf32a93c08909c92c3d3f4208ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa2b1cf32a93c08909c92c3d3f4208ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa2b1cf32a93c08909c92c3d3f4208ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa2b1cf32a93c08909c92c3d3f4208ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa2b1cf32a93c08909c92c3d3f4208ea,
        type_description_1,
        par_color,
        par_mode,
        var_alpha,
        var_r,
        var_g,
        var_b
    );


    // Release cached frame.
    if ( frame_fa2b1cf32a93c08909c92c3d3f4208ea == cache_frame_fa2b1cf32a93c08909c92c3d3f4208ea )
    {
        Py_DECREF( frame_fa2b1cf32a93c08909c92c3d3f4208ea );
    }
    cache_frame_fa2b1cf32a93c08909c92c3d3f4208ea = NULL;

    assertFrameObject( frame_fa2b1cf32a93c08909c92c3d3f4208ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageColor$$$function_2_getcolor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_color );
    par_color = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_color );
    par_color = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageColor$$$function_2_getcolor );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function_1_getrgb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageColor$$$function_1_getrgb,
        const_str_plain_getrgb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aebd1d947fe6995f9bc379f80193f8a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageColor,
        const_str_digest_510d08a6042c84f798d290fc9693ba62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function_2_getcolor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageColor$$$function_2_getcolor,
        const_str_plain_getcolor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa2b1cf32a93c08909c92c3d3f4208ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$ImageColor,
        const_str_digest_b5d0fa9449dfe6f17fd5f9caa5d70fde,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$ImageColor =
{
    PyModuleDef_HEAD_INIT,
    "PIL.ImageColor",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( PIL$ImageColor )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$ImageColor );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("PIL.ImageColor: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL.ImageColor: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL.ImageColor: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$ImageColor" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$ImageColor = Py_InitModule4(
        "PIL.ImageColor",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_PIL$ImageColor = PyModule_Create( &mdef_PIL$ImageColor );
#endif

    moduledict_PIL$ImageColor = MODULE_DICT( module_PIL$ImageColor );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_PIL$ImageColor,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_PIL$ImageColor,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageColor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageColor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_PIL$ImageColor );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_396e31e89171c0c093bee3eef0c8dfa8, module_PIL$ImageColor );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ba86c6df1ae79198a6b702c35ee8e2c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_ba86c6df1ae79198a6b702c35ee8e2c2 = MAKE_MODULE_FRAME( codeobj_ba86c6df1ae79198a6b702c35ee8e2c2, module_PIL$ImageColor );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ba86c6df1ae79198a6b702c35ee8e2c2 );
    assert( Py_REFCNT( frame_ba86c6df1ae79198a6b702c35ee8e2c2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_empty;
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageColor;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Image_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_ba86c6df1ae79198a6b702c35ee8e2c2->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)MODULE_DICT(tmp_import_name_from_1),
                const_str_plain_Image,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Image );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_Image, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_PIL$ImageColor;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_ba86c6df1ae79198a6b702c35ee8e2c2->m_frame.f_lineno = 21;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba86c6df1ae79198a6b702c35ee8e2c2 );
#endif
    popFrameStack();

    assertFrameObject( frame_ba86c6df1ae79198a6b702c35ee8e2c2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba86c6df1ae79198a6b702c35ee8e2c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba86c6df1ae79198a6b702c35ee8e2c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba86c6df1ae79198a6b702c35ee8e2c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba86c6df1ae79198a6b702c35ee8e2c2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_PIL$ImageColor$$$function_1_getrgb(  );



        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_getrgb, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_PIL$ImageColor$$$function_2_getcolor(  );



        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_getcolor, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_Copy( const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00 );
        UPDATE_STRING_DICT1( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain_colormap, tmp_assign_source_8 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_PIL$ImageColor );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
