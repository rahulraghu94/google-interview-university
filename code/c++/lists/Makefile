CC=gcc
CFLAGS=-Wall
DEPS=list.h
OBJ=list.o test.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -rf *.o test