# Using implicit rules

main : main.o adder.o
	gcc -o main main.o adder.o

main.o : main.c

adder.o : adder.c adder.h

clean :
	rm main *.o
