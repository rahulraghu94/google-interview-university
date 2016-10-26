CC=g++
CFLAGS=-Wall
DEPS=hash.hpp
OBJ=test.o hash.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf *.o test