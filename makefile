# mon premier make

main: function.o main.o
	gcc function.o main.o -o main -Wall

function.o: inc/function.h src/function.c
	gcc -c src/function.c

main.o: inc/function.h src/main.c
	gcc -c src/main.c

clean:
	rm *.o main
