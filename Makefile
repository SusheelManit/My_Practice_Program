CFLAGS=-std=c99
matrix: array.o matrix.o
	gcc ($CFLAGS) array.o matrix.o -o matrix

array.o:
	gcc ($CFLAGS) -c array.c
matrix.o:
	gcc ($CFLAGS) -c matrix.c
clean:
	rm -fr *.o matrix
