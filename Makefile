CC=g++
CFLAGS=-Wall -c

all: color

color: colorize.o color.o
	$(CC) -o color color.o colorize.o

colorize.o: src/colorize.cc
	$(CC) $(CFLAGS) src/colorize.cc

color.o: src/color.cc
	$(CC) $(CFLAGS) src/color.cc

clean:
	rm *.o

install: color
	install color /usr/local/bin
