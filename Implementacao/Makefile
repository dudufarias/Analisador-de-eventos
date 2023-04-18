INCLUDE_FOLDER = ./include/
BIN_FOLDER = ./bin/
OBJ_FOLDER = ./obj/
SRC_FOLDER = ./src/

CC = g++
CFLAGS = -Wall -c -I$(INCLUDE_FOLDER)
LIBS = -lm

TARGET = $(BIN_FOLDER)/tp02
HDR_FILES = $(INCLUDE_FOLDER)/maxCrossSub.hpp $(INCLUDE_FOLDER)/maxRegSub.hpp
OBJ_FILES = $(OBJ_FOLDER)/maxCrossSub.o $(OBJ_FOLDER)/maxRegSub.o $(OBJ_FOLDER)/main.o

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) -o $(TARGET) $(LIBS) $(OBJ_FILES)

$(OBJ_FOLDER)/main.o: $(SRC_FOLDER)/main.cpp
	$(CC) $(CFLAGS) -o $(OBJ_FOLDER)/main.o $(SRC_FOLDER)/main.cpp 

$(OBJ_FOLDER)/maxCrossSub.o: $(HDR_FILES) $(SRC_FOLDER)/maxCrossSub.cpp
	$(CC) $(CFLAGS) -o $(OBJ_FOLDER)/maxCrossSub.o $(SRC_FOLDER)/maxCrossSub.cpp 

$(OBJ_FOLDER)/maxRegSub.o: $(HDR_FILES) $(SRC_FOLDER)/maxRegSub.cpp
	$(CC) $(CFLAGS) -o $(OBJ_FOLDER)/maxRegSub.o $(SRC_FOLDER)maxRegSub.cpp  

clean:
	rm $(TARGET) $(OBJ_FILES)