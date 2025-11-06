# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = main

# Source files
SRCS = main.cpp cat.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Build app -> ./main
build:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Default target
#all: $(TARGET)
## Linking
#$(TARGET): $(OBJS)
#	@echo "Linking object files to create the executable..."
#	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
#
### Compiling
#%.o: %.cpp
#	@echo "Compiling $<..."
#	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	@echo "Cleaning up..."
	rm -f $(TARGET) $(OBJS)
