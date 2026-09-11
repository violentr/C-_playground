CXX      = g++
CXXFLAGS = -Wall -std=c++20

test: test.o
	$(CXX) $(CXXFLAGS) test.o -o test

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp -o test.o

clean:
	rm -f *.o test

.PHONY: clean
