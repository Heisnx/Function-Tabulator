# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Iinclude -Wall -g

# Source and include directories
SRC_DIR = src
INC_DIR = include
BIN_DIR = bin

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(SRCS))

# Executable name
EXEC = $(BIN_DIR)/program.exe

# Default target
all: $(EXEC)

# Link the object files to create the executable
$(EXEC): $(OBJS)
	$(CC) -o $@ $^

# Compile the source files into object files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)  # Create bin directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -rf $(BIN_DIR)/*.o $(EXEC)

.PHONY: all clean
