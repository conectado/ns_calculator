CC = g++
CFLAGS = -Wall -std=c++11
DEPS = src/ns_solver.h
OBJ = obj/main.o obj/ns_solver.o

obj/%.o: src/%.cpp src/%.tpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

bin/ns_calculate: $(OBJ) 
	$(CC) $(CFLAGS) -o  $@ $^
