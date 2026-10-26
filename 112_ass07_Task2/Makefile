# art targets
.PHONY: build run clean


build: program.exe
	@ echo "Creates 'calculator' executable"

 program.exe: main.o math.o
	@ gcc -g main.o math.o -o program.exe 

 main.o: main.c math.h
	@ gcc -g -Wall -std=c99 -pedantic -c main.c -o main.o

math.o: math.c
	@ gcc -g -Wall -std=c99 -pedantic -c math.c -o math.o

run: 
	@ echo Prints 
	@ ./program.exe


clean: 
	@ echo Removes 'calculator'
#	@ rm -f *.o
#	@ rm -f *.exe
	@ del *.o
	@ del *.exe
