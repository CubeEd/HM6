CC = gcc
CFLAGS = -Wall -Wextra -fPIC -Iinclude
LDFLAGS = -shared
LIB_NAME = convert
LIBRARY = lib$(LIB_NAME).so

# Source files
LIB_SRCS = src/convert.c

# Object files
LIB_OBJS = $(LIB_SRCS:src/%.c=%.o)

# Targets
all: $(LIBRARY) install clean-obj

install: $(LIBRARY)
	sudo cp $(LIBRARY) /usr/lib
	sudo chmod 0755 /usr/lib/$(LIBRARY)
	sudo ldconfig

# Build the shared library
$(LIBRARY): $(LIB_OBJS)
	$(CC) $(LDFLAGS) -o $@ $(LIB_OBJS)

# Compile source files into object files
%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(LIBRARY) $(LIB_OBJS)
	sudo rm /usr/lib/$(LIBRARY)

clean-obj: 
	rm -f $(LIB_OBJS)
	

.PHONY: all clean clean-obj