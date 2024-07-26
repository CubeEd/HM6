# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -IConverter/include
LDFLAGS = -LConverter -lconvert

# Directories
LIB_DIR = Converter
SRC_DIR = src
OBJ_DIR = obj

# Files
LIBRARY = $(LIB_DIR)/libconvert.so
LOWER_PROGRAM = low
UPPER_PROGRAM = uper

# Source files
LOWER_SRC = $(SRC_DIR)/low.c
UPPER_SRC = $(SRC_DIR)/uper.c

# Object files
LOWER_OBJ = $(OBJ_DIR)/$(LOWER_PROGRAM).o
UPPER_OBJ = $(OBJ_DIR)/$(UPPER_PROGRAM).o

# Targets
all: $(LIBRARY) $(LOWER_PROGRAM) $(UPPER_PROGRAM)

# Build the lower program
$(LOWER_PROGRAM): $(LOWER_SRC) $(LIBRARY)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(LOWER_SRC) -o $(LOWER_OBJ)
	$(CC) $(LOWER_OBJ) -o $@ $(LDFLAGS)

# Build the upper program
$(UPPER_PROGRAM): $(UPPER_SRC) $(LIBRARY)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(UPPER_SRC) -o $(UPPER_OBJ)
	$(CC) $(UPPER_OBJ) -o $@ $(LDFLAGS)

# Build the library by calling Converter/Makefile
$(LIBRARY):
	$(MAKE) -C $(LIB_DIR)

# Clean up build artifacts
clean:
	$(MAKE) -C $(LIB_DIR) clean
	rm -rf $(OBJ_DIR) $(LOWER_PROGRAM) $(UPPER_PROGRAM)

.PHONY: all clean
