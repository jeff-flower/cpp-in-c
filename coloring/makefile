# compile vertex_coloring.cpp as is
cpp-only: vertex.o
	g++ vertex.o -o vertex

vertex.o:
	g++ -c vertex_coloring.cpp -o vertex.o


# compile vertex_coloring.cpp to library and call from c file
extern: lib main.o
	gcc -g -Wall -L. -o main.exe main.o -lvertex -Wl,-rpath=/home/jeff/Code/Thesis/cpp-test/coloring

vertex_extern.o:
	g++ -c -g -fPIC vertex_coloring_extern.cpp -o vertex_extern.o

lib: vertex_extern.o
	g++ -g -shared -o libvertex.so vertex_extern.o

main.o: 
	gcc -c main.c -o main.o 

clean:
	rm vertex.o vertex
