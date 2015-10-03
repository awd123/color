all:
	gcc -o color src/color.c
	echo -e "#!/bin/sh\n./color \"Hello, World! I am a simple program that takes one string as an argument, colorizes it, and prints it to stdout.\"" > test.sh
	echo "Please run \"chmod +x test.sh && ./test.sh\" if you want to test the program."
