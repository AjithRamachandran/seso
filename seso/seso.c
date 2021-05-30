#include <Python.h>
#include <numpy/arrayobject.h>

static PyMethodDef seso_methods[] = {
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
