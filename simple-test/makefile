all: func.o lib test.o main.o
	gcc -g -Wall -L. -o main.exe test.o main.o -lfunc

func.o:
	g++ -c -g -Wall -Werror -fPIC func.cpp

lib:
	g++ -g -shared -o libfunc.so func.o

test.o: 
	gcc -c test.c -o test.o

main.o: 
	gcc -c main.c -o main.o 

clean:
	rm *.o main.exe libfunc.so
