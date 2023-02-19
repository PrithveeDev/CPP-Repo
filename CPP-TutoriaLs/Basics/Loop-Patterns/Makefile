CC = g++
all: $(patsubst %.cpp, ./bin/%.out, $(wildcard *.cpp))

./bin/%.out: %.cpp 
	$(CC) $< -o $@ 

clean: 
	rm -rf ./bin/*.out