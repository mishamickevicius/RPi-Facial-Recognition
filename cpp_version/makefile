# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Use pkg-config to get OpenCV compile and link flags
OPENCV_FLAGS = `pkg-config --cflags --libs opencv`

# Source files
SRC = main.cpp faceDetect.cpp

# Output binary
TARGET = test_detect

# Build rule
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(OPENCV_FLAGS)

# Clean rule
clean:
	rm -f $(TARGET)