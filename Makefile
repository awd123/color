all: color

color: color.o
	gcc color.o -o color

color.o: src/color.c
	gcc -c src/color.c

clean:
	rm *.o

