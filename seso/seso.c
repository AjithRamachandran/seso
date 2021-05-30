#include <Python.h>
#include <numpy/arrayobject.h>

#include "include/sort.h"

static PyObject* seso_sort(PyObject *self, PyObject *args) {
    PyObject *arg=NULL, *arr=NULL;
    double *cArr;
    npy_intp dims[3];
    char* algorithm = "bubblesort"; // bubblesort is the default sorting for now

    if (!PyArg_ParseTuple(args, "O|s", &arg, &algorithm))
        return NULL;

    arr = PyArray_FROM_OTF(arg, NPY_DOUBLE, NPY_IN_ARRAY);

    PyArray_AsCArray(&arr, (void *)&cArr, dims, PyArray_NDIM(arr), PyArray_DescrFromType(NPY_DOUBLE));

    int err = sort(cArr, dims[0], algorithm);
    
    if(err==1) {
        PyErr_SetString( PyExc_ValueError, "specified sort type not available");
        Py_DECREF(arr);
        return NULL;
    } else {
        Py_DECREF(arr);
        return PyArray_Return(arr);
    }
}

static PyMethodDef seso_methods[] = {
    {"sort", seso_sort, METH_VARARGS, "sorting algorithms" },
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef seso = {
        PyModuleDef_HEAD_INIT,
        "seso",
        "A Python module for searching and sorting",
        -1,
        seso_methods,
};

PyMODINIT_FUNC PyInit_seso(void) {
    Py_Initialize();
    import_array();
    return PyModule_Create(&seso);
}
