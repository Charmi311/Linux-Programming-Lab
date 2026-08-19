# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2
TARGET = math_app
SRCS = main.cpp MathUtils.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target: compile and link everything
all: $(TARGET)

# Rule to link object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp source files into .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove generated build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Declare non-file targets
.PHONY: all clean
