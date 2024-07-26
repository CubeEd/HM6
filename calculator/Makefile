# Define variables
CC = gcc
CFLAGS = -Iinclude -Wall -Werror -Wextra
LDFLAGS = -L. -lcalc -lm
LIB_NAME = libcalc.a
EXEC = calculator

# Source files
SRC_DIR = src
SRC_FILES = main.c $(SRC_DIR)/add.c $(SRC_DIR)/subtract.c $(SRC_DIR)/multiply.c $(SRC_DIR)/divide.c $(SRC_DIR)/factorial.c $(SRC_DIR)/sqrt.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Header files
HEADERS = include/calc.h

.PHONY: all clean clean-all install clean-obj

# Default target to build the executable
all: $(EXEC) clean-obj

# Build the static library
$(LIB_NAME): $(filter-out main.o, $(OBJ_FILES))
	ar rcs $@ $^

# Build the executable and link with the static library
$(EXEC): main.o $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and the executable
clean: clean-obj clean-all
	rm -f $(EXEC) $(LIB_NAME)

clean-obj:
	rm -f $(OBJ_FILES)

# Clean all generated files including the installed files
clean-all:
	rm -f /usr/local/bin/$(EXEC) /usr/local/include/calc.h

# Install the executable and header files
install: $(EXEC)
	install -m 755 $(EXEC) /usr/local/bin/
	install -m 644 include/calc.h /usr/local/include/
