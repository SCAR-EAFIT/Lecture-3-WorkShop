CXX = clang++
CXXFLAGS = -std=c++23

programa: function1.o function2.o function3.o main.o
	$(CXX) $(CXXFLAGS) -o programa function1.o function2.o function3.o main.o

function1.o:
	$(CXX) $(CXXFLAGS) -o function1.o -c function1.cpp

function2.o:
	$(CXX) $(CXXFLAGS) -o function2.o -c function2.cpp

function3.o:
	$(CXX) $(CXXFLAGS) -o function3.o -c function3.cpp

main.o:
	$(CXX) $(CXXFLAGS) -o main.o -c main.cpp

.PHONY: clean, run, clean_all
clean:
	rm -rf *.o

clean_all:
	rm -rf *.o programa

run:
	./programa