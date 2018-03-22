# Declaration of variables
CC = g++
CC_FLAGS = -std=c++11 -I/usr/include/

# File names
TEST = CalcTest
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(TEST): $(OBJECTS)
	$(CC) $(CC_FLAGS) $(OBJECTS) -o $(TEST) 

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

# To remove generated files
clean:
	rm -f $(TEST) $(OBJECTS)
