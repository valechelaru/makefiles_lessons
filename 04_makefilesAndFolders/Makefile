
main : main.c adderlib AdderLib/adder.h
	gcc main.c -Llibs -ladderlib -o main

adderlib : AdderLib/adder.c AdderLib/adder.h
	gcc -c AdderLib/adder.c
	ar rcs libadderlib.a adder.o
	mkdir libs
	mv adder.o libadderlib.a libs

clean :
	rm -r main libs
