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
  cout << colorize(colorme) << endl;
  return 0;
}
