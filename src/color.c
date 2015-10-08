#include <python2.7/Python.h>
#include "color.h"

int
main (int argc, char *argv[])
{
  PyObject *pName, *pModule, *pDict, *pFunc;
  PyObject *pArgs, *pValue;
  int i;
  
  char str[1000];
  
  str[1000] = '\0';

  if (argv[(argc - 1)] == "color")
  if (argc == 0)
    {
      printf("Entering interactive mode...\n");
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
      /*
      printf ("Entering interactive mode... (type exit to exit)\n");
      while (1)
	{
          printf ("color> ");
          fgets (str, sizeof(str), stdin);
            if (str == "exit")
	      break;
	    else
	      colorize (str);
	}
      */
    }
  else
    colorize (argv[argc]);

  return 0;
}
