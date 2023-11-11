# Makefile

CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

SRC_DIR := .
OBJ_DIR := obj
BIN_DIR := bin

# List of source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Generate a list of object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Name of the executable
TARGET := my_program

all: $(BIN_DIR)/$(TARGET)

# Link the object files to generate the executable
$(BIN_DIR)/$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile each source file into an object file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
