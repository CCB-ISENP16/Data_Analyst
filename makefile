# mon premier make

main: function.o main.o
	gcc function.o main.o -o main -Wall

function.o: inc/function.h src/function.c
	gcc -c src/function.c -Wall

main.o: inc/function.h src/main.c
	gcc -c src/main.c -Wall

clean:
	rm *.o main
