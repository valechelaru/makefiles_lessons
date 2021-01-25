# simple makefiles consists of rules with the shape:
###########################
# target : prerequisites
#	recipe
###########################
# target is usually the name of the file that is generated (executable, obj file etc.)
# a target can also be the name of an action to carry out such as 'clean' -> Phony targets
# prerequisite is a file that is used as an imput to create the target. The target can depend on zero or more files
# the recipe is the action that is carried out by make. One line or multiple lines
# the recipe is indented by using TABS!

main : main.c adderlib
	gcc main.c -Llibs -ladderlib -o main

adderlib : adder.c
	gcc -c adder.c
	ar rcs libadderlib.a adder.o
	mkdir libs
	mv adder.o libadderlib.a libs

clean :
	rm -r main libs
