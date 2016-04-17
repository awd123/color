#include <cstdlib>
#include <iostream>
#include <string>
#include <boost/program_options/cmdline.hpp>
#include "color.h"
using namespace std;

namespace po = boost::program_options;

int main(int argc, char *argv[])
{
  string colorme = argv[1];
  try {
    cout << colorize(colorme) << endl;
  } catch (int e) {
    cout << "Function colorize() threw an error: " << e << endl;
    return e;
  }
  return 0;
}
