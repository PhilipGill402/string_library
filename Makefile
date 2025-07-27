# Makefile

# Compiler and flags
CXX = gcc

# Sources and objects
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,src/%.o,$(SRC))

# Output binary
TARGET = string 

# Default rule
all: $(TARGET)

# Linking
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Compile .cpp to .o
src/%.o: src/%.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f src/*.o $(TARGET)
