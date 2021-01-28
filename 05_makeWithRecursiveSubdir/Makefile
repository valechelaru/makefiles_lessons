

main : main.c adder.o suber.o
	gcc -o main main.c -LAdderLib -LSubLib -ladder -lsuber

# Takeaway: the adder.o has to be mentioned here too else TARGET=adder.o is not triggered
#main.o : main.c adder.o suber.o
#	gcc -c main.c -LAdderLib -LSubLib -ladder -lsuber

adder.o :
	echo "Building AdderLib..."
	+$(MAKE) -G AdderLib
	echo "AdderLib build!"

suber.o :
	echo "Building SubLib..."
	+$(MAKE) -G SubLib
	echo "SubLib build!"

clean :
	rm AdderLib/*.o
	rm AdderLib/*.a
	rm SubLib/*.o
	rm SubLib/*.a
	rm *.exe
