def interactive:
    while True:
        in_string = raw_input("color> ")
        if in_string == q:
            sys.exit()
        else:
            print py_colorize(in_string)
