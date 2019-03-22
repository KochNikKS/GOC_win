from decimal import Decimal, ROUND_HALF_UP


def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        return False


def n_repeat(some_func, number:int=1, **kwargs):
    """ a may be some function """
    return (some_func(**kwargs) for i in range(number))


def dict_min(some_dict: dict): # returns keys, korresponding to the minimal value/es
    minimal = min(some_dict.values())
    return (key for key in some_dict if some_dict[key] == minimal)


def strfilter(line: str, filter_symbols='', sets=()):
    """
    This function filter line using filter_symbols and sets to get set of acceptable symbols.
    sets variable must be iterable containing some of such strings as: LATIN, DIGITS, LINES, PUNCT, MATH, SPEC,
    SPACE

    >>> print(strfilter(line='ATGCATGCATGC', filter_symbols='GCS'))
    GCGCGC
    >>> print(strfilter(line='HELLo Dolly, this is YOur fr1end - VAsya, my email is: #Vasya@gmail.com', sets=("LATIN", "SPEC")))
    HELLoDollythisisYOurfrendVAsyamyemailis#Vasya@gmailcom
    """

    LATIN = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'
    DIGITS = '0123456789'
    LINES = '_-|'
    PUNCT_MARKS = '!,.?:;"\''
    MATH = '+=-*/\\[]{}%^'
    SPECIAL = '@#$'
    SPACE = ' '
    ALPHABET = {'LATIN': LATIN, 'DIGITS': DIGITS, 'LINES': LINES,
                'PUNCT': PUNCT_MARKS, 'MATH': MATH, 'SPEC': SPECIAL, 'SPACE': SPACE}

    if all(key in ALPHABET  for key in sets):
        symbols_set = filter_symbols
        for sym_set in sets:
            symbols_set += ALPHABET[sym_set]
        # print(symbols_set)
        try:
            return ''.join(filter(lambda x: x in symbols_set, line))
        except TypeError:
            return line
    else:
        return line

def arithmetic_round(value: float, template=0.1):
    """
    >>> print(arithmetic_round(123.12334, 0.1))
    123.1
    >>> print(arithmetic_round(123.562334, 1))
    124.0
    """
    return float(Decimal(str(value)).quantize(exp=Decimal(str(template)), rounding=ROUND_HALF_UP))


def any_in(container1, container2):
    """
    Check, wheather any of container1 items exists in container2
    """
    return any(i in container2 for i in container1)


def all_in(container1, container2):
    """
    Check, whether all members of first container exists in container2
    """
    return all(i in container2 for i in container1)

def dfilter(fnc, dictionary): # filter dictionary
    return {key: dictionary[key] for key in filter(fnc, dictionary)}

def distance(x1, x0, y1, y0):
    return ((x1 - x0) ** 2 + (y1 - y0) ** 2) ** 0.5
