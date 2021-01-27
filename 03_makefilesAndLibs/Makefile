
main : main.o adder.o
	gcc -o main main.o adder.o

main.o : main.c
	gcc -c main.c

adder.o : adder.c adder.h
	gcc -c adder.c

clean :
	rm main *.o
