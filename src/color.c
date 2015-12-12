#include <python2.7/Python.h>
#include "color.h"

int
main (int argc, char *argv[])
{
  PyObject *pName, *pModule, *pFunc;
  int i;

  if (argc == 0)
    {
      printf ("Entering interactive mode...\n");
      Py_Initialize ();
      
      pName = PyString_FromString ("initialize.py");
      pModule = PyImport_Import (pName);
      Py_DECREF (pName);

      if (pModule != NULL)
	{
	  pFunc = PyObject_GetAttrString (pModule, "interactive");

	  Py_XDECREF (pFunc);
	  Py_DECREF (pModule);
	  Py_Finalize ();
	}
    }
  else
    colorize (argv[argc]);

  return 0;
}
