#this target will compile all the files 
all: hello
hello: main.o
	gcc main.o -o hello
main.o: main.c
	gcc -c main.c
clean:
	rm -rf *o hello
	   

