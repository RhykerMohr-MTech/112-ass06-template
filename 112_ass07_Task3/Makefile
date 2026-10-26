# C = C compiler
CC     := gcc
# compiler flags
CFLAGS := -Wall -std=c99 -pedantic
DFLAG  := -g
## -g -debugging
## - Wall longer description
## -std - standard of complier

OBJ_DIR := obj
SRC_DIR := src
BIN_DIR := bin
INC_DIR := inc




TARGET	:= $(BIN_DIR)/program.exe
OBJS	:= $(OBJ_DIR)/main.o $(OBJ_DIR)/math.o
#Essentially shorthand references for variables

# art targets
.PHONY: build run clean


build: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	@ echo "Creates 'calculator' executable"
	@ $(CC) $(DFLAG) $(OBJS) -o $(BIN_DIR)/program.exe

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c $(INC_DIR)/math.h | $(OBJ_DIR)
	@ $(CC) $(DFLAG) $(CFLAGS) -I $(INC_DIR) -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/math.o: $(SRC_DIR)/math.c | $(OBJ_DIR)
	@ $(CC) $(DFLAG) $(CFLAGS) -c $(SRC_DIR)/math.c -o $(OBJ_DIR)/math.o


$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BIN_DIR):
	mkdir $(BIN_DIR)



run:
	@ echo Prints
	@ $(BIN_DIR)/program.exe


clean: 
	@ echo Removes 'calculator'
	@ rm -f $(OBJS)
	@ rm -f $(TARGET)