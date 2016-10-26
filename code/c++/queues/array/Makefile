CC=g++
CFLAGS=-Wall
DEPS=queue.hpp
OBJ=queue.o test.o

%.o: %c $(DEP)
	$(CC) -c -o $@ $< $(cFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf test *.o