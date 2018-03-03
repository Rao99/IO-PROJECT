all: hellomake
hellomake: makehello makefunc
	gcc hellomake.o hellofunc.o -o hello
makehello: hellomake.c
	gcc -c hellomake.c
makefunc: hellofunc.c
	gcc -c hellofunc.c
run: all
	./hello
clean:
	rm *.o

