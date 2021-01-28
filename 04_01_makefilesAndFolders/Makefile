
main : main.o libadderlib.a
	gcc -o main main.o -LAdderLib -ladderlib

# Takeaway: the adder.o has to be mentioned here too else TARGET=adder.o is not triggered
main.o : main.c AdderLib/adder.h
	gcc -c main.c

libadderlib.a :
	echo "Here!"
	+$(MAKE) -G AdderLib
	echo "Here no2"

clean :
	rm AdderLib/*.o
	rm AdderLib/*.a
	rm *.o
	rm *.exe
