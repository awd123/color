#include <unistd.h>
#include <cstdio>
#include <string>
#include "color.h"
using namespace std;

string colorize(string colorme)
{
  if (!isatty(fileno(stdout)))
    throw 1;

  string output;
  int i;
  int n;
  int strlength = colorme.length();

  for (i = 0, n = 0; i < strlength; i++, n++) {
    if (i == strlength - 1);
  }   
}
