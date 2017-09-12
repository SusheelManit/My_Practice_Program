#this program compile three file
all: hello
hello: hello.o Getsum.o Getavg.o
	gcc hello.o Getsum.o Getavg.o -o hello
Getsum.o: Getsum.c
	gcc -c Getsum.c
hello.o: hello.c
	gcc -c hello.c
Getavg: Getavg.c
	gcc -c Getavg.c
clean:
	rm -rf *o hello

