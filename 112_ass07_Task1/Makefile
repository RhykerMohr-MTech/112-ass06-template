# art targets
.PHONY: compile run clean


compile: program.exe
	@ echo "Creates 'program' executable"

 program.exe: main.o
	gcc -g main.o -o program.exe

 main.o: main.c
	gcc -g -Wall -std=c99 -pedantic -c main.c -o main.o

run: 
	@ echo Prints 
	@ ./program.exe


clean: 
	@ echo Removes 'program'
#	@ rm -f *.o
#	@ rm -f *.exe
	@ del *.o
	@ del *.exe
