# Compiler and flags
CC = gcc 
CFLAGS = -Wall -Wextra -g -MMD -MP

# Collect all C files and corresponding object and dependency files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)

# Output binary name
TARGET = program

# Default target: build the program
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Compile .c files to .o, generating .d files for header dependencies
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Include auto-generated dependency files
-include $(DEPS)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up compiled files and the executable
clean:
	rm -f $(OBJ) $(DEPS) $(TARGET)
