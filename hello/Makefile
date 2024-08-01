# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -O2 -std=c++17
LDFLAGS = -flto

# Define the target executable and source files
TARGET = hello
SRCS = hello.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to link the target executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up the build files
clean:
	rm -f $(TARGET) $(OBJS)

# A phony target is one that is not actually the name of a file
.PHONY: all clean

