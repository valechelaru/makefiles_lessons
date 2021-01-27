
main : main.o adder.o
	gcc -o main main.o adder.o

# Takeaway: the adder.o has to be mentioned here too else TARGET=adder.o is not triggered
main.o : main.c adder.o
	gcc -c main.c

adder.o :
	echo "Here!"
	+$(MAKE) -C AdderLib
	echo "Here no2"

clean :
	rm main *.o */*.o
