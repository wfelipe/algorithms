CC = gcc
CFLAGS = -g
headers = sort.h
objects = insertion.o

.c.o:
	$(CC) $(CFLAGS) -c $<

all: sort-test

sort-test: $(objects) sort-test.o
	$(CC) $(CFLAGS) -o sort-test $(objects) sort-test.o

$(objects): $(headers)

clean:
	rm sort-test *.o
