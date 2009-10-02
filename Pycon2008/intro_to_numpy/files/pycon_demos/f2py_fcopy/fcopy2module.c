/* File: fcopy2module.c
 * This file is auto-generated with f2py (version:2_4422).
 * f2py is a Fortran to Python Interface Generator (FPIG), Second Edition,
 * written by Pearu Peterson <pearu@cens.ioc.ee>.
 * See http://cens.ioc.ee/projects/f2py2e/
 * Generation date: Thu Mar 13 00:21:00 2008
 * $Revision:$
 * $Date:$
 * Do not edit this file directly unless you know what you are doing!!!
 */
#ifdef __cplusplus
extern "C" {
#endif

/*********************** See f2py2e/cfuncs.py: includes ***********************/
#include "Python.h"
#include "fortranobject.h"
#include <math.h>

/**************** See f2py2e/rules.py: mod_rules['modulebody'] ****************/
static PyObject *fcopy2_error;
static PyObject *fcopy2_module;

/*********************** See f2py2e/cfuncs.py: typedefs ***********************/
typedef struct {double r,i;} complex_double;

/****************** See f2py2e/cfuncs.py: typedefs_generated ******************/
/*need_typedefs_generated*/

/********************** See f2py2e/cfuncs.py: cppmacros **********************/
#if defined(PREPEND_FORTRAN)
#if defined(NO_APPEND_FORTRAN)
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) _##F
#else
#define F_FUNC(f,F) _##f
#endif
#else
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) _##F##_
#else
#define F_FUNC(f,F) _##f##_
#endif
#endif
#else
#if defined(NO_APPEND_FORTRAN)
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F
#else
#define F_FUNC(f,F) f
#endif
#else
#if defined(UPPERCASE_FORTRAN)
#define F_FUNC(f,F) F##_
#else
#define F_FUNC(f,F) f##_
#endif
#endif
#endif
#if defined(UNDERSCORE_G77)
#define F_FUNC_US(f,F) F_FUNC(f##_,F##_)
#else
#define F_FUNC_US(f,F) F_FUNC(f,F)
#endif

#define rank(var) var ## _Rank
#define shape(var,dim) var ## _Dims[dim]
#define old_rank(var) (((PyArrayObject *)(capi_ ## var ## _tmp))->nd)
#define old_shape(var,dim) (((PyArrayObject *)(capi_ ## var ## _tmp))->dimensions[dim])
#define fshape(var,dim) shape(var,rank(var)-dim-1)
#define len(var) shape(var,0)
#define flen(var) fshape(var,0)
#define size(var) PyArray_SIZE((PyArrayObject *)(capi_ ## var ## _tmp))
/* #define index(i) capi_i ## i */
#define slen(var) capi_ ## var ## _len

#ifdef DEBUGCFUNCS
#define CFUNCSMESS(mess) fprintf(stderr,"debug-capi:"mess);
#define CFUNCSMESSPY(mess,obj) CFUNCSMESS(mess) \
  PyObject_Print((PyObject *)obj,stderr,Py_PRINT_RAW);\
  fprintf(stderr,"\n");
#else
#define CFUNCSMESS(mess)
#define CFUNCSMESSPY(mess,obj)
#endif

#ifndef MAX
#define MAX(a,b) ((a > b) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a,b) ((a < b) ? (a) : (b))
#endif


/************************ See f2py2e/cfuncs.py: cfuncs ************************/
/*need_cfuncs*/

/********************* See f2py2e/cfuncs.py: userincludes *********************/
/*need_userincludes*/

/********************* See f2py2e/capi_rules.py: usercode *********************/


/* See f2py2e/rules.py */
extern void F_FUNC(fcopy,FCOPY)(complex_double*,int*,complex_double*);
/*eof externroutines*/

/******************** See f2py2e/capi_rules.py: usercode1 ********************/


/******************* See f2py2e/cb_rules.py: buildcallback *******************/
/*need_callbacks*/

/*********************** See f2py2e/rules.py: buildapi ***********************/

/*********************************** fcopy ***********************************/
static char doc_f2py_rout_fcopy2_fcopy[] = "\
Function signature:\n\
  aout = fcopy(ain)\n\
Required arguments:\n"
"  ain : input rank-1 array('D') with bounds (n)\n"
"Return objects:\n"
"  aout : rank-1 array('D') with bounds (n)";
/* extern void F_FUNC(fcopy,FCOPY)(complex_double*,int*,complex_double*); */
static PyObject *f2py_rout_fcopy2_fcopy(const PyObject *capi_self,
                           PyObject *capi_args,
                           PyObject *capi_keywds,
                           void (*f2py_func)(complex_double*,int*,complex_double*)) {
  PyObject * volatile capi_buildvalue = NULL;
  volatile int f2py_success = 1;
/*decl*/

  complex_double *ain = NULL;
  npy_intp ain_Dims[1] = {-1};
  const int ain_Rank = 1;
  PyArrayObject *capi_ain_tmp = NULL;
  int capi_ain_intent = 0;
  PyObject *ain_capi = Py_None;
  int n = 0;
  complex_double *aout = NULL;
  npy_intp aout_Dims[1] = {-1};
  const int aout_Rank = 1;
  PyArrayObject *capi_aout_tmp = NULL;
  int capi_aout_intent = 0;
  static char *capi_kwlist[] = {"ain",NULL};

/*routdebugenter*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_clock();
#endif
  if (!PyArg_ParseTupleAndKeywords(capi_args,capi_keywds,\
    "O|:fcopy2.fcopy",\
    capi_kwlist,&ain_capi))
    return NULL;
/*frompyobj*/
  /* Processing variable ain */
  ;
  capi_ain_intent |= F2PY_INTENT_IN;
  capi_ain_tmp = array_from_pyobj(PyArray_CDOUBLE,ain_Dims,ain_Rank,capi_ain_intent,ain_capi);
  if (capi_ain_tmp == NULL) {
    if (!PyErr_Occurred())
      PyErr_SetString(fcopy2_error,"failed in converting 1st argument `ain' of fcopy2.fcopy to C/Fortran array" );
  } else {
    ain = (complex_double *)(capi_ain_tmp->data);

  /* Processing variable n */
  n = len(ain);
  /* Processing variable aout */
  aout_Dims[0]=n;
  capi_aout_intent |= F2PY_INTENT_OUT|F2PY_INTENT_HIDE;
  capi_aout_tmp = array_from_pyobj(PyArray_CDOUBLE,aout_Dims,aout_Rank,capi_aout_intent,Py_None);
  if (capi_aout_tmp == NULL) {
    if (!PyErr_Occurred())
      PyErr_SetString(fcopy2_error,"failed in converting hidden `aout' of fcopy2.fcopy to C/Fortran array" );
  } else {
    aout = (complex_double *)(capi_aout_tmp->data);

/*end of frompyobj*/
#ifdef F2PY_REPORT_ATEXIT
f2py_start_call_clock();
#endif
/*callfortranroutine*/
        (*f2py_func)(ain,&n,aout);
if (PyErr_Occurred())
  f2py_success = 0;
#ifdef F2PY_REPORT_ATEXIT
f2py_stop_call_clock();
#endif
/*end of callfortranroutine*/
    if (f2py_success) {
/*pyobjfrom*/
/*end of pyobjfrom*/
    CFUNCSMESS("Building return value.\n");
    capi_buildvalue = Py_BuildValue("N",capi_aout_tmp);
/*closepyobjfrom*/
/*end of closepyobjfrom*/
    } /*if (f2py_success) after callfortranroutine*/
/*cleanupfrompyobj*/
  }  /*if (capi_aout_tmp == NULL) ... else of aout*/
  /* End of cleaning variable aout */
  /* End of cleaning variable n */
  if((PyObject *)capi_ain_tmp!=ain_capi) {
    Py_XDECREF(capi_ain_tmp); }
  }  /*if (capi_ain_tmp == NULL) ... else of ain*/
  /* End of cleaning variable ain */
/*end of cleanupfrompyobj*/
  if (capi_buildvalue == NULL) {
/*routdebugfailure*/
  } else {
/*routdebugleave*/
  }
  CFUNCSMESS("Freeing memory.\n");
/*freemem*/
#ifdef F2PY_REPORT_ATEXIT
f2py_stop_clock();
#endif
  return capi_buildvalue;
}
/******************************** end of fcopy ********************************/
/*eof body*/

/******************* See f2py2e/f90mod_rules.py: buildhooks *******************/
/*need_f90modhooks*/

/************** See f2py2e/rules.py: module_rules['modulebody'] **************/

/******************* See f2py2e/common_rules.py: buildhooks *******************/

/*need_commonhooks*/

/**************************** See f2py2e/rules.py ****************************/

static FortranDataDef f2py_routine_defs[] = {
  {"fcopy",-1,{{-1}},0,(char *)F_FUNC(fcopy,FCOPY),(f2py_init_func)f2py_rout_fcopy2_fcopy,doc_f2py_rout_fcopy2_fcopy},

/*eof routine_defs*/
  {NULL}
};

static PyMethodDef f2py_module_methods[] = {

  {NULL,NULL}
};

PyMODINIT_FUNC initfcopy2(void) {
  int i;
  PyObject *m,*d, *s;
  m = fcopy2_module = Py_InitModule("fcopy2", f2py_module_methods);
  PyFortran_Type.ob_type = &PyType_Type;
  import_array();
  if (PyErr_Occurred())
    {PyErr_SetString(PyExc_ImportError, "can't initialize module fcopy2 (failed to import numpy)"); return;}
  d = PyModule_GetDict(m);
  s = PyString_FromString("$Revision: $");
  PyDict_SetItemString(d, "__version__", s);
  s = PyString_FromString("This module 'fcopy2' is auto-generated with f2py (version:2_4422).\nFunctions:\n"
"  aout = fcopy(ain)\n"
".");
  PyDict_SetItemString(d, "__doc__", s);
  fcopy2_error = PyErr_NewException ("fcopy2.error", NULL, NULL);
  Py_DECREF(s);
  for(i=0;f2py_routine_defs[i].name!=NULL;i++)
    PyDict_SetItemString(d, f2py_routine_defs[i].name,PyFortranObject_NewAsAttr(&f2py_routine_defs[i]));

/*eof initf2pywraphooks*/
/*eof initf90modhooks*/

/*eof initcommonhooks*/


#ifdef F2PY_REPORT_ATEXIT
  if (! PyErr_Occurred())
    on_exit(f2py_report_on_exit,(void*)"fcopy2");
#endif

}
#ifdef __cplusplus
}
#endif