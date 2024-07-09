/* Minimal main program -- everything is loaded from the library */

// #include "Python.h" we link libpython instead to get these functions

#ifdef MS_WINDOWS
int
wmain(int argc, wchar_t **argv)
{
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    return Py_BytesMain(argc, argv);
}
#endif
