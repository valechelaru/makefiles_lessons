
OBJECTS += adder.o

LIBS += libadderlib.a

libadderlib.a: $(OBJECTS)
	echo "$* $+ $@ $%"
	ar rcs $@ $(OBJECTS)

$(OBJECTS) : %.o: %.c %.h
	gcc -c $<
