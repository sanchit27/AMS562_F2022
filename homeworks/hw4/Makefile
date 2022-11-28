output: array.o main.o
	g++ array.o main.o -o output 

array.o: array.cpp array.hpp
	g++ -c array.cpp

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm *.o output

