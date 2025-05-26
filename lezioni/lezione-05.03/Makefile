BIN_DIR = ./bin
OBJ_DIR = ./obj
SRC_DIR = ./src

PROG = main

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CFLAGS = -g
CC = g++

all: $(BIN_DIR)/$(PROG)

$(BIN_DIR)/$(PROG): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(BIN_DIR)/$(PROG)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f $(BIN_DIR)/$(PROG)
