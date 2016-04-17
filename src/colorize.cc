#include <unistd.h>
#include <cstdio>
#include <string>
#include "color.h"
using namespace std;

string colorize(string colorme)
{
  if (!isatty(fileno(stdout)))
    throw 1; // Throw error if not outputting to a terminal
  //TODO: Move this statement to color.cc

  string output;
  int i;
  int n;
  int strlength = colorme.length();

  for (i = 0, n = 0; i < strlength; i++, n++) {
    if (i == strlength - 1) {
      output += "\x1b[" + (n < 8) + string(";3") +
        (n < 8) ? n : (n - 7) + string("m")
        colorme[i] + string("\x1b[0m");
    } else {
      output += "\x1b[" + (n < 8) + string(";3") +
        ((n < 8) ? n : (n - 7)) + string("m")
        colorme[i];
    }
  }
}
