CXXFLAGS +=-std=c++11

main: main.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o main main.o vectors.o optimism.o fusion.o pairwise.o

tests: tests.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o pairwise.o
	
main.o: main.cpp vectors.o optimism.o fusion.o pairwise.o

tests.o: tests.cpp doctest.h vectors.h optimism.h fusion.h pairwise.h

vectors.o: vectors.cpp vectors.h 
	g++ -g -c vectors.cpp

optimism.o: optimism.cpp optimism.h
	g++ -g -c optimism.cpp

fusion.o: fusion.cpp fusion.h
	g++ -g -c fusion.cpp

pairwise.o: pairwise.cpp pairwise.h
	g++ -g -c pairwise.cpp
clean:
	rm -f main.o tests.o vectors.o optimism.o fusion.o pairwise.o
