CC = g++
CFLAGS = -Wall -std=c++11
OBJ = obj/main.o
BIN = bin/ns_calculate

all: bin/ns_calculate

obj/%.o: src/%.cpp src/*.tpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(BIN): $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm obj/*
	rm bin/*
