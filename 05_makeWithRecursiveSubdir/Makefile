
all : main

include AdderLib/Makefile
include SubLib/Makefile

main.o : main.c
	gcc -c main.c -I"AdderLib" -I"SubLib"

main : main.o $(OBJECTS)
	gcc -o main main.o $(OBJECTS)

clean :
	rm *.o
	rm main
