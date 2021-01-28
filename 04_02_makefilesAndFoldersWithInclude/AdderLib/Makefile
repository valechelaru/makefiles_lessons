
OBJECTS := AdderLib/adder.o

LIBS := AdderLib/libadderlib.a

$(LIBS) : ${OBJECTS}
	ar rcs $(LIBS) ${OBJECTS}

${OBJECTS} : %.o: %.c %.h
	# echo "$* $@ $%"
	gcc -c $< -o $@
