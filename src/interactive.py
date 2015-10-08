#!/usr/bin/python

import sys

def py_colorize(string):
    n = 0
    for c in string:
        colored_string += ("\e["
                        + (0 if n < 8 else 1)
                        + ";3"
                        + (n if n < 8 else (n - 7))
                        + "m"
                        + c)
    return colored_string

def interactive():
    while True:
        in_string = raw_input("color> ")
        if in_string == q:
            sys.exit()
        else:
            print py_colorize(in_string)
