
include AdderLib/Makefile

main : main.o $(LIBS)
	gcc -o main main.o -LAdderLib -ladderlib

# Takeaway: the adder.o has to be mentioned here too else TARGET=adder.o is not triggered
main.o : main.c AdderLib/adder.h
	gcc -c main.c

clean :
	rm AdderLib/*.o
	rm AdderLib/*.a
	rm *.o
	rm *.exe
