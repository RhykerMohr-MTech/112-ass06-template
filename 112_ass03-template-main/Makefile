CC = gcc
CFLAGS = -Wall -g -Isrc

TARGET = bin/main.exe

OBJS = obj/main.o obj/tests.o obj/unity.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

obj/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

obj/tests.o: src/tests.c src/unity.h
	$(CC) $(CFLAGS) -c src/tests.c -o obj/tests.o

obj/unity.o: src/unity.c src/unity.h
	$(CC) $(CFLAGS) -c src/unity.c -o obj/unity.o

clean:
	del obj\*.o bin\main.exe