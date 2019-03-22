/* Generated code for Python module 'PIL._binary'
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

/* The "_module_PIL$_binary" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_binary;
PyDictObject *moduledict_PIL$_binary;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_i_tuple;
static PyObject *const_str_plain_si32le;
extern PyObject *const_str_plain_i16be;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain__util;
static PyObject *const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3;
static PyObject *const_str_digest_b22ef13125ae928b4c157e2daef9f13a;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_c_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_0d795948ac026c8895e54d5dd89cafe4;
extern PyObject *const_str_plain_i8;
extern PyObject *const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
extern PyObject *const_str_plain_int;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
static PyObject *const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2;
static PyObject *const_tuple_str_plain_unpack_from_str_plain_pack_tuple;
static PyObject *const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683;
extern PyObject *const_int_pos_255;
static PyObject *const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
static PyObject *const_str_digest_4c7efb018ed6263311cb5a77008a1217;
extern PyObject *const_str_plain_i32be;
static PyObject *const_str_digest_d7a767126ce8fdf55617407b24bcf832;
extern PyObject *const_str_digest_8e5335fb02f73f9b285b14387631d654;
static PyObject *const_str_digest_8c543a885745efa767b39eac92a01934;
extern PyObject *const_str_plain_i32le;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_o32be;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_py3;
extern PyObject *const_str_plain_o16le;
extern PyObject *const_str_plain_o32le;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_py3_tuple;
extern PyObject *const_str_plain_i16le;
extern PyObject *const_str_plain_o8;
static PyObject *const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
static PyObject *const_str_plain_si16le;
static PyObject *const_tuple_str_plain_c_str_plain_o_tuple;
extern PyObject *const_str_plain_unpack_from;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_o16be;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_si32le = UNSTREAM_STRING_ASCII( &constant_bin[ 114140 ], 6, 1 );
    const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3 = UNSTREAM_STRING_ASCII( &constant_bin[ 114146 ], 11, 0 );
    const_str_digest_b22ef13125ae928b4c157e2daef9f13a = UNSTREAM_STRING_ASCII( &constant_bin[ 114157 ], 153, 0 );
    const_str_digest_0d795948ac026c8895e54d5dd89cafe4 = UNSTREAM_STRING_ASCII( &constant_bin[ 114310 ], 156, 0 );
    const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2 = UNSTREAM_STRING_ASCII( &constant_bin[ 114466 ], 14, 0 );
    const_tuple_str_plain_unpack_from_str_plain_pack_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_from_str_plain_pack_tuple, 0, const_str_plain_unpack_from ); Py_INCREF( const_str_plain_unpack_from );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_from_str_plain_pack_tuple, 1, const_str_plain_pack ); Py_INCREF( const_str_plain_pack );
    const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683 = UNSTREAM_STRING_ASCII( &constant_bin[ 114480 ], 156, 0 );
    const_str_digest_c6ccceacb61480b9230ce3733fbc80d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 28313 ], 2, 0 );
    const_str_digest_4c7efb018ed6263311cb5a77008a1217 = UNSTREAM_STRING_ASCII( &constant_bin[ 114636 ], 2, 0 );
    const_str_digest_d7a767126ce8fdf55617407b24bcf832 = UNSTREAM_STRING_ASCII( &constant_bin[ 114638 ], 20, 0 );
    const_str_digest_8c543a885745efa767b39eac92a01934 = UNSTREAM_STRING_ASCII( &constant_bin[ 114658 ], 153, 0 );
    const_str_digest_e32643bbdc087df0169bdbc4edb2d9da = UNSTREAM_STRING_ASCII( &constant_bin[ 102598 ], 2, 0 );
    const_str_plain_si16le = UNSTREAM_STRING_ASCII( &constant_bin[ 114811 ], 6, 1 );
    const_tuple_str_plain_c_str_plain_o_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_o_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_o_tuple, 1, const_str_plain_o ); Py_INCREF( const_str_plain_o );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$_binary( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0b1ef02837a2766f043a5bb903091213;
static PyCodeObject *codeobj_99f6585bce4fb815f35b41c539b4c48a;
static PyCodeObject *codeobj_d876a6f14dc5a32e9f0eb004800c2bb5;
static PyCodeObject *codeobj_a1f7152d039e829ed7f321f3d46b4cc9;
static PyCodeObject *codeobj_1fea87538d72ab6591bd0bccf893ba26;
static PyCodeObject *codeobj_294ff0fd1b340279487ca7b2986302c6;
static PyCodeObject *codeobj_d5314caa0f7b6dfb4610eafb4ef0cb45;
static PyCodeObject *codeobj_c9f87f8b5534628d6d2b37eb93130342;
static PyCodeObject *codeobj_37e68212c2a1af7064b8433c560373e4;
static PyCodeObject *codeobj_55439935fb066dbfb7ff8e43ca7da777;
static PyCodeObject *codeobj_dd841930885740b57c68ce63ed7751d3;
static PyCodeObject *codeobj_79a1a118b6af0dd140746f654ecad50b;
static PyCodeObject *codeobj_d3d9b71d571606375d5403981f00cce2;
static PyCodeObject *codeobj_77e87ffe31d1cc28d6e7069c56aae955;
static PyCodeObject *codeobj_3b01496858286cf79c83bac15b03a877;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2 );
    codeobj_0b1ef02837a2766f043a5bb903091213 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d7a767126ce8fdf55617407b24bcf832, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_99f6585bce4fb815f35b41c539b4c48a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i16be, 72, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d876a6f14dc5a32e9f0eb004800c2bb5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i16le, 32, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a1f7152d039e829ed7f321f3d46b4cc9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i32be, 76, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fea87538d72ab6591bd0bccf893ba26 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i32le, 52, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_294ff0fd1b340279487ca7b2986302c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i8, 18, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5314caa0f7b6dfb4610eafb4ef0cb45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i8, 24, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9f87f8b5534628d6d2b37eb93130342 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o16be, 89, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37e68212c2a1af7064b8433c560373e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o16le, 81, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55439935fb066dbfb7ff8e43ca7da777 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o32be, 93, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd841930885740b57c68ce63ed7751d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o32le, 85, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79a1a118b6af0dd140746f654ecad50b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o8, 21, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d3d9b71d571606375d5403981f00cce2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o8, 27, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_77e87ffe31d1cc28d6e7069c56aae955 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_si16le, 42, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b01496858286cf79c83bac15b03a877 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_si32le, 62, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_1_i8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_2_o8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( PyObject *defaults );


// The module function definitions.
static PyObject *impl_PIL$_binary$$$function_1_i8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_294ff0fd1b340279487ca7b2986302c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_294ff0fd1b340279487ca7b2986302c6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_294ff0fd1b340279487ca7b2986302c6, codeobj_294ff0fd1b340279487ca7b2986302c6, module_PIL$_binary, sizeof(void *) );
    frame_294ff0fd1b340279487ca7b2986302c6 = cache_frame_294ff0fd1b340279487ca7b2986302c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_294ff0fd1b340279487ca7b2986302c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_294ff0fd1b340279487ca7b2986302c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_c );
        tmp_source_name_1 = par_c;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = (PyObject *)&PyLong_Type;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_1 = par_c;
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ff0fd1b340279487ca7b2986302c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ff0fd1b340279487ca7b2986302c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_294ff0fd1b340279487ca7b2986302c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_294ff0fd1b340279487ca7b2986302c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_294ff0fd1b340279487ca7b2986302c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_294ff0fd1b340279487ca7b2986302c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_294ff0fd1b340279487ca7b2986302c6,
        type_description_1,
        par_c
    );


    // Release cached frame.
    if ( frame_294ff0fd1b340279487ca7b2986302c6 == cache_frame_294ff0fd1b340279487ca7b2986302c6 )
    {
        Py_DECREF( frame_294ff0fd1b340279487ca7b2986302c6 );
    }
    cache_frame_294ff0fd1b340279487ca7b2986302c6 = NULL;

    assertFrameObject( frame_294ff0fd1b340279487ca7b2986302c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_1_i8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_1_i8 );
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


static PyObject *impl_PIL$_binary$$$function_2_o8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_79a1a118b6af0dd140746f654ecad50b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79a1a118b6af0dd140746f654ecad50b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79a1a118b6af0dd140746f654ecad50b, codeobj_79a1a118b6af0dd140746f654ecad50b, module_PIL$_binary, sizeof(void *) );
    frame_79a1a118b6af0dd140746f654ecad50b = cache_frame_79a1a118b6af0dd140746f654ecad50b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79a1a118b6af0dd140746f654ecad50b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79a1a118b6af0dd140746f654ecad50b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_i );
        tmp_left_name_1 = par_i;
        tmp_right_name_1 = const_int_pos_255;
        tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bytes_arg_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_bytes_arg_1, 0, tmp_tuple_element_1 );
        tmp_return_value = BUILTIN_BYTES1( tmp_bytes_arg_1 );
        Py_DECREF( tmp_bytes_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79a1a118b6af0dd140746f654ecad50b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79a1a118b6af0dd140746f654ecad50b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79a1a118b6af0dd140746f654ecad50b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79a1a118b6af0dd140746f654ecad50b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79a1a118b6af0dd140746f654ecad50b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79a1a118b6af0dd140746f654ecad50b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79a1a118b6af0dd140746f654ecad50b,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_79a1a118b6af0dd140746f654ecad50b == cache_frame_79a1a118b6af0dd140746f654ecad50b )
    {
        Py_DECREF( frame_79a1a118b6af0dd140746f654ecad50b );
    }
    cache_frame_79a1a118b6af0dd140746f654ecad50b = NULL;

    assertFrameObject( frame_79a1a118b6af0dd140746f654ecad50b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_2_o8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_2_o8 );
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


static PyObject *impl_PIL$_binary$$$function_3_i8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d5314caa0f7b6dfb4610eafb4ef0cb45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5314caa0f7b6dfb4610eafb4ef0cb45 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5314caa0f7b6dfb4610eafb4ef0cb45, codeobj_d5314caa0f7b6dfb4610eafb4ef0cb45, module_PIL$_binary, sizeof(void *) );
    frame_d5314caa0f7b6dfb4610eafb4ef0cb45 = cache_frame_d5314caa0f7b6dfb4610eafb4ef0cb45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT( par_c );
        tmp_ord_arg_1 = par_c;
        tmp_return_value = BUILTIN_ORD( tmp_ord_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5314caa0f7b6dfb4610eafb4ef0cb45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5314caa0f7b6dfb4610eafb4ef0cb45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5314caa0f7b6dfb4610eafb4ef0cb45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5314caa0f7b6dfb4610eafb4ef0cb45,
        type_description_1,
        par_c
    );


    // Release cached frame.
    if ( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 == cache_frame_d5314caa0f7b6dfb4610eafb4ef0cb45 )
    {
        Py_DECREF( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );
    }
    cache_frame_d5314caa0f7b6dfb4610eafb4ef0cb45 = NULL;

    assertFrameObject( frame_d5314caa0f7b6dfb4610eafb4ef0cb45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_3_i8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_3_i8 );
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


static PyObject *impl_PIL$_binary$$$function_4_o8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d3d9b71d571606375d5403981f00cce2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3d9b71d571606375d5403981f00cce2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3d9b71d571606375d5403981f00cce2, codeobj_d3d9b71d571606375d5403981f00cce2, module_PIL$_binary, sizeof(void *) );
    frame_d3d9b71d571606375d5403981f00cce2 = cache_frame_d3d9b71d571606375d5403981f00cce2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3d9b71d571606375d5403981f00cce2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3d9b71d571606375d5403981f00cce2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_chr_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_i );
        tmp_left_name_1 = par_i;
        tmp_right_name_1 = const_int_pos_255;
        tmp_chr_arg_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_chr_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_CHR( tmp_chr_arg_1 );
        Py_DECREF( tmp_chr_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3d9b71d571606375d5403981f00cce2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3d9b71d571606375d5403981f00cce2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3d9b71d571606375d5403981f00cce2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3d9b71d571606375d5403981f00cce2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3d9b71d571606375d5403981f00cce2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3d9b71d571606375d5403981f00cce2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3d9b71d571606375d5403981f00cce2,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_d3d9b71d571606375d5403981f00cce2 == cache_frame_d3d9b71d571606375d5403981f00cce2 )
    {
        Py_DECREF( frame_d3d9b71d571606375d5403981f00cce2 );
    }
    cache_frame_d3d9b71d571606375d5403981f00cce2 = NULL;

    assertFrameObject( frame_d3d9b71d571606375d5403981f00cce2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_4_o8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_4_o8 );
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


static PyObject *impl_PIL$_binary$$$function_5_i16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d876a6f14dc5a32e9f0eb004800c2bb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d876a6f14dc5a32e9f0eb004800c2bb5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d876a6f14dc5a32e9f0eb004800c2bb5, codeobj_d876a6f14dc5a32e9f0eb004800c2bb5, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_d876a6f14dc5a32e9f0eb004800c2bb5 = cache_frame_d876a6f14dc5a32e9f0eb004800c2bb5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d876a6f14dc5a32e9f0eb004800c2bb5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_d876a6f14dc5a32e9f0eb004800c2bb5->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d876a6f14dc5a32e9f0eb004800c2bb5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d876a6f14dc5a32e9f0eb004800c2bb5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d876a6f14dc5a32e9f0eb004800c2bb5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d876a6f14dc5a32e9f0eb004800c2bb5,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_d876a6f14dc5a32e9f0eb004800c2bb5 == cache_frame_d876a6f14dc5a32e9f0eb004800c2bb5 )
    {
        Py_DECREF( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );
    }
    cache_frame_d876a6f14dc5a32e9f0eb004800c2bb5 = NULL;

    assertFrameObject( frame_d876a6f14dc5a32e9f0eb004800c2bb5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_5_i16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_5_i16le );
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


static PyObject *impl_PIL$_binary$$$function_6_si16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_77e87ffe31d1cc28d6e7069c56aae955;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77e87ffe31d1cc28d6e7069c56aae955 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_77e87ffe31d1cc28d6e7069c56aae955, codeobj_77e87ffe31d1cc28d6e7069c56aae955, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_77e87ffe31d1cc28d6e7069c56aae955 = cache_frame_77e87ffe31d1cc28d6e7069c56aae955;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_77e87ffe31d1cc28d6e7069c56aae955 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_77e87ffe31d1cc28d6e7069c56aae955 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_4c7efb018ed6263311cb5a77008a1217;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_77e87ffe31d1cc28d6e7069c56aae955->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e87ffe31d1cc28d6e7069c56aae955 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e87ffe31d1cc28d6e7069c56aae955 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e87ffe31d1cc28d6e7069c56aae955 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_77e87ffe31d1cc28d6e7069c56aae955, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_77e87ffe31d1cc28d6e7069c56aae955->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_77e87ffe31d1cc28d6e7069c56aae955, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_77e87ffe31d1cc28d6e7069c56aae955,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_77e87ffe31d1cc28d6e7069c56aae955 == cache_frame_77e87ffe31d1cc28d6e7069c56aae955 )
    {
        Py_DECREF( frame_77e87ffe31d1cc28d6e7069c56aae955 );
    }
    cache_frame_77e87ffe31d1cc28d6e7069c56aae955 = NULL;

    assertFrameObject( frame_77e87ffe31d1cc28d6e7069c56aae955 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_6_si16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_6_si16le );
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


static PyObject *impl_PIL$_binary$$$function_7_i32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1fea87538d72ab6591bd0bccf893ba26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1fea87538d72ab6591bd0bccf893ba26 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1fea87538d72ab6591bd0bccf893ba26, codeobj_1fea87538d72ab6591bd0bccf893ba26, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_1fea87538d72ab6591bd0bccf893ba26 = cache_frame_1fea87538d72ab6591bd0bccf893ba26;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1fea87538d72ab6591bd0bccf893ba26 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1fea87538d72ab6591bd0bccf893ba26 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_1fea87538d72ab6591bd0bccf893ba26->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fea87538d72ab6591bd0bccf893ba26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fea87538d72ab6591bd0bccf893ba26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fea87538d72ab6591bd0bccf893ba26 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fea87538d72ab6591bd0bccf893ba26, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fea87538d72ab6591bd0bccf893ba26->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fea87538d72ab6591bd0bccf893ba26, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1fea87538d72ab6591bd0bccf893ba26,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_1fea87538d72ab6591bd0bccf893ba26 == cache_frame_1fea87538d72ab6591bd0bccf893ba26 )
    {
        Py_DECREF( frame_1fea87538d72ab6591bd0bccf893ba26 );
    }
    cache_frame_1fea87538d72ab6591bd0bccf893ba26 = NULL;

    assertFrameObject( frame_1fea87538d72ab6591bd0bccf893ba26 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_7_i32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_7_i32le );
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


static PyObject *impl_PIL$_binary$$$function_8_si32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3b01496858286cf79c83bac15b03a877;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b01496858286cf79c83bac15b03a877 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b01496858286cf79c83bac15b03a877, codeobj_3b01496858286cf79c83bac15b03a877, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_3b01496858286cf79c83bac15b03a877 = cache_frame_3b01496858286cf79c83bac15b03a877;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b01496858286cf79c83bac15b03a877 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b01496858286cf79c83bac15b03a877 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_3b01496858286cf79c83bac15b03a877->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b01496858286cf79c83bac15b03a877 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b01496858286cf79c83bac15b03a877 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b01496858286cf79c83bac15b03a877 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b01496858286cf79c83bac15b03a877, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b01496858286cf79c83bac15b03a877->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b01496858286cf79c83bac15b03a877, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b01496858286cf79c83bac15b03a877,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_3b01496858286cf79c83bac15b03a877 == cache_frame_3b01496858286cf79c83bac15b03a877 )
    {
        Py_DECREF( frame_3b01496858286cf79c83bac15b03a877 );
    }
    cache_frame_3b01496858286cf79c83bac15b03a877 = NULL;

    assertFrameObject( frame_3b01496858286cf79c83bac15b03a877 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_8_si32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_8_si32le );
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


static PyObject *impl_PIL$_binary$$$function_9_i16be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_99f6585bce4fb815f35b41c539b4c48a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_99f6585bce4fb815f35b41c539b4c48a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99f6585bce4fb815f35b41c539b4c48a, codeobj_99f6585bce4fb815f35b41c539b4c48a, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_99f6585bce4fb815f35b41c539b4c48a = cache_frame_99f6585bce4fb815f35b41c539b4c48a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99f6585bce4fb815f35b41c539b4c48a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99f6585bce4fb815f35b41c539b4c48a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_8e5335fb02f73f9b285b14387631d654;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_99f6585bce4fb815f35b41c539b4c48a->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99f6585bce4fb815f35b41c539b4c48a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99f6585bce4fb815f35b41c539b4c48a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99f6585bce4fb815f35b41c539b4c48a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99f6585bce4fb815f35b41c539b4c48a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99f6585bce4fb815f35b41c539b4c48a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99f6585bce4fb815f35b41c539b4c48a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99f6585bce4fb815f35b41c539b4c48a,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_99f6585bce4fb815f35b41c539b4c48a == cache_frame_99f6585bce4fb815f35b41c539b4c48a )
    {
        Py_DECREF( frame_99f6585bce4fb815f35b41c539b4c48a );
    }
    cache_frame_99f6585bce4fb815f35b41c539b4c48a = NULL;

    assertFrameObject( frame_99f6585bce4fb815f35b41c539b4c48a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_9_i16be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_9_i16be );
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


static PyObject *impl_PIL$_binary$$$function_10_i32be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a1f7152d039e829ed7f321f3d46b4cc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a1f7152d039e829ed7f321f3d46b4cc9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a1f7152d039e829ed7f321f3d46b4cc9, codeobj_a1f7152d039e829ed7f321f3d46b4cc9, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_a1f7152d039e829ed7f321f3d46b4cc9 = cache_frame_a1f7152d039e829ed7f321f3d46b4cc9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a1f7152d039e829ed7f321f3d46b4cc9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a1f7152d039e829ed7f321f3d46b4cc9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack_from );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack_from" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_o );
        tmp_args_element_name_3 = par_o;
        frame_a1f7152d039e829ed7f321f3d46b4cc9->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1f7152d039e829ed7f321f3d46b4cc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1f7152d039e829ed7f321f3d46b4cc9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1f7152d039e829ed7f321f3d46b4cc9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a1f7152d039e829ed7f321f3d46b4cc9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a1f7152d039e829ed7f321f3d46b4cc9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a1f7152d039e829ed7f321f3d46b4cc9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1f7152d039e829ed7f321f3d46b4cc9,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_a1f7152d039e829ed7f321f3d46b4cc9 == cache_frame_a1f7152d039e829ed7f321f3d46b4cc9 )
    {
        Py_DECREF( frame_a1f7152d039e829ed7f321f3d46b4cc9 );
    }
    cache_frame_a1f7152d039e829ed7f321f3d46b4cc9 = NULL;

    assertFrameObject( frame_a1f7152d039e829ed7f321f3d46b4cc9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_10_i32be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_10_i32be );
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


static PyObject *impl_PIL$_binary$$$function_11_o16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_37e68212c2a1af7064b8433c560373e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37e68212c2a1af7064b8433c560373e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37e68212c2a1af7064b8433c560373e4, codeobj_37e68212c2a1af7064b8433c560373e4, module_PIL$_binary, sizeof(void *) );
    frame_37e68212c2a1af7064b8433c560373e4 = cache_frame_37e68212c2a1af7064b8433c560373e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37e68212c2a1af7064b8433c560373e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37e68212c2a1af7064b8433c560373e4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
        CHECK_OBJECT( par_i );
        tmp_args_element_name_2 = par_i;
        frame_37e68212c2a1af7064b8433c560373e4->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37e68212c2a1af7064b8433c560373e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37e68212c2a1af7064b8433c560373e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37e68212c2a1af7064b8433c560373e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37e68212c2a1af7064b8433c560373e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37e68212c2a1af7064b8433c560373e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37e68212c2a1af7064b8433c560373e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37e68212c2a1af7064b8433c560373e4,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_37e68212c2a1af7064b8433c560373e4 == cache_frame_37e68212c2a1af7064b8433c560373e4 )
    {
        Py_DECREF( frame_37e68212c2a1af7064b8433c560373e4 );
    }
    cache_frame_37e68212c2a1af7064b8433c560373e4 = NULL;

    assertFrameObject( frame_37e68212c2a1af7064b8433c560373e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_11_o16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_11_o16le );
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


static PyObject *impl_PIL$_binary$$$function_12_o32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_dd841930885740b57c68ce63ed7751d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd841930885740b57c68ce63ed7751d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd841930885740b57c68ce63ed7751d3, codeobj_dd841930885740b57c68ce63ed7751d3, module_PIL$_binary, sizeof(void *) );
    frame_dd841930885740b57c68ce63ed7751d3 = cache_frame_dd841930885740b57c68ce63ed7751d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd841930885740b57c68ce63ed7751d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd841930885740b57c68ce63ed7751d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
        CHECK_OBJECT( par_i );
        tmp_args_element_name_2 = par_i;
        frame_dd841930885740b57c68ce63ed7751d3->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd841930885740b57c68ce63ed7751d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd841930885740b57c68ce63ed7751d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd841930885740b57c68ce63ed7751d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd841930885740b57c68ce63ed7751d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd841930885740b57c68ce63ed7751d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd841930885740b57c68ce63ed7751d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd841930885740b57c68ce63ed7751d3,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_dd841930885740b57c68ce63ed7751d3 == cache_frame_dd841930885740b57c68ce63ed7751d3 )
    {
        Py_DECREF( frame_dd841930885740b57c68ce63ed7751d3 );
    }
    cache_frame_dd841930885740b57c68ce63ed7751d3 = NULL;

    assertFrameObject( frame_dd841930885740b57c68ce63ed7751d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_12_o32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_12_o32le );
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


static PyObject *impl_PIL$_binary$$$function_13_o16be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c9f87f8b5534628d6d2b37eb93130342;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9f87f8b5534628d6d2b37eb93130342 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9f87f8b5534628d6d2b37eb93130342, codeobj_c9f87f8b5534628d6d2b37eb93130342, module_PIL$_binary, sizeof(void *) );
    frame_c9f87f8b5534628d6d2b37eb93130342 = cache_frame_c9f87f8b5534628d6d2b37eb93130342;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9f87f8b5534628d6d2b37eb93130342 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9f87f8b5534628d6d2b37eb93130342 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_8e5335fb02f73f9b285b14387631d654;
        CHECK_OBJECT( par_i );
        tmp_args_element_name_2 = par_i;
        frame_c9f87f8b5534628d6d2b37eb93130342->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9f87f8b5534628d6d2b37eb93130342 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9f87f8b5534628d6d2b37eb93130342 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9f87f8b5534628d6d2b37eb93130342 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9f87f8b5534628d6d2b37eb93130342, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9f87f8b5534628d6d2b37eb93130342->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9f87f8b5534628d6d2b37eb93130342, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9f87f8b5534628d6d2b37eb93130342,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_c9f87f8b5534628d6d2b37eb93130342 == cache_frame_c9f87f8b5534628d6d2b37eb93130342 )
    {
        Py_DECREF( frame_c9f87f8b5534628d6d2b37eb93130342 );
    }
    cache_frame_c9f87f8b5534628d6d2b37eb93130342 = NULL;

    assertFrameObject( frame_c9f87f8b5534628d6d2b37eb93130342 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_13_o16be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_13_o16be );
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


static PyObject *impl_PIL$_binary$$$function_14_o32be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_55439935fb066dbfb7ff8e43ca7da777;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55439935fb066dbfb7ff8e43ca7da777 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_55439935fb066dbfb7ff8e43ca7da777, codeobj_55439935fb066dbfb7ff8e43ca7da777, module_PIL$_binary, sizeof(void *) );
    frame_55439935fb066dbfb7ff8e43ca7da777 = cache_frame_55439935fb066dbfb7ff8e43ca7da777;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55439935fb066dbfb7ff8e43ca7da777 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55439935fb066dbfb7ff8e43ca7da777 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
        CHECK_OBJECT( par_i );
        tmp_args_element_name_2 = par_i;
        frame_55439935fb066dbfb7ff8e43ca7da777->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55439935fb066dbfb7ff8e43ca7da777 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_55439935fb066dbfb7ff8e43ca7da777 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55439935fb066dbfb7ff8e43ca7da777 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55439935fb066dbfb7ff8e43ca7da777, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55439935fb066dbfb7ff8e43ca7da777->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55439935fb066dbfb7ff8e43ca7da777, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55439935fb066dbfb7ff8e43ca7da777,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_55439935fb066dbfb7ff8e43ca7da777 == cache_frame_55439935fb066dbfb7ff8e43ca7da777 )
    {
        Py_DECREF( frame_55439935fb066dbfb7ff8e43ca7da777 );
    }
    cache_frame_55439935fb066dbfb7ff8e43ca7da777 = NULL;

    assertFrameObject( frame_55439935fb066dbfb7ff8e43ca7da777 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_14_o32be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_14_o32be );
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



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_10_i32be,
        const_str_plain_i32be,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1f7152d039e829ed7f321f3d46b4cc9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_11_o16le,
        const_str_plain_o16le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_37e68212c2a1af7064b8433c560373e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_12_o32le,
        const_str_plain_o32le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dd841930885740b57c68ce63ed7751d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_13_o16be,
        const_str_plain_o16be,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9f87f8b5534628d6d2b37eb93130342,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_14_o32be,
        const_str_plain_o32be,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_55439935fb066dbfb7ff8e43ca7da777,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_1_i8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_1_i8,
        const_str_plain_i8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_294ff0fd1b340279487ca7b2986302c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_2_o8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_2_o8,
        const_str_plain_o8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79a1a118b6af0dd140746f654ecad50b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_3_i8,
        const_str_plain_i8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5314caa0f7b6dfb4610eafb4ef0cb45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_4_o8,
        const_str_plain_o8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3d9b71d571606375d5403981f00cce2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_5_i16le,
        const_str_plain_i16le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d876a6f14dc5a32e9f0eb004800c2bb5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_6_si16le,
        const_str_plain_si16le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_77e87ffe31d1cc28d6e7069c56aae955,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        const_str_digest_b22ef13125ae928b4c157e2daef9f13a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_7_i32le,
        const_str_plain_i32le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fea87538d72ab6591bd0bccf893ba26,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        const_str_digest_0d795948ac026c8895e54d5dd89cafe4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_8_si32le,
        const_str_plain_si32le,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b01496858286cf79c83bac15b03a877,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        const_str_digest_8c543a885745efa767b39eac92a01934,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_9_i16be,
        const_str_plain_i16be,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_99f6585bce4fb815f35b41c539b4c48a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$_binary =
{
    PyModuleDef_HEAD_INIT,
    "PIL._binary",
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

MOD_INIT_DECL( PIL$_binary )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$_binary );
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
    puts("PIL._binary: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._binary: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._binary: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$_binary" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$_binary = Py_InitModule4(
        "PIL._binary",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_PIL$_binary = PyModule_Create( &mdef_PIL$_binary );
#endif

    moduledict_PIL$_binary = MODULE_DICT( module_PIL$_binary );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_PIL$_binary,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_PIL$_binary );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3, module_PIL$_binary );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_0b1ef02837a2766f043a5bb903091213;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0b1ef02837a2766f043a5bb903091213 = MAKE_MODULE_FRAME( codeobj_0b1ef02837a2766f043a5bb903091213, module_PIL$_binary );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0b1ef02837a2766f043a5bb903091213 );
    assert( Py_REFCNT( frame_0b1ef02837a2766f043a5bb903091213 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_struct;
        tmp_globals_name_1 = (PyObject *)moduledict_PIL$_binary;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_unpack_from_str_plain_pack_tuple;
        tmp_level_name_1 = const_int_0;
        frame_0b1ef02837a2766f043a5bb903091213->m_frame.f_lineno = 14;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unpack_from );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack_from, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_pack );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack, tmp_assign_source_6 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__util;
        tmp_globals_name_2 = (PyObject *)moduledict_PIL$_binary;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_py3_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_0b1ef02837a2766f043a5bb903091213->m_frame.f_lineno = 15;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)MODULE_DICT(tmp_import_name_from_3),
                const_str_plain_py3,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_py3 );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_py3, tmp_assign_source_7 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_py3 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py3 );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_3 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_PIL$_binary$$$function_1_i8(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i8, tmp_assign_source_8 );
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_PIL$_binary$$$function_2_o8(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o8, tmp_assign_source_9 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i8, tmp_assign_source_10 );
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  );



            UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o8, tmp_assign_source_11 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b1ef02837a2766f043a5bb903091213 );
#endif
    popFrameStack();

    assertFrameObject( frame_0b1ef02837a2766f043a5bb903091213 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b1ef02837a2766f043a5bb903091213 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b1ef02837a2766f043a5bb903091213, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b1ef02837a2766f043a5bb903091213->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b1ef02837a2766f043a5bb903091213, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i16le, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_13 = MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_si16le, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_14 = MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i32le, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_15 = MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_si32le, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_16 = MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i16be, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_17 = MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i32be, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o16le, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o32le, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o16be, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  );



        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o32be, tmp_assign_source_21 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_PIL$_binary );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
