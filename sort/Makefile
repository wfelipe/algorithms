CC = gcc
CFLAGS = -g -O0
headers = sort.h
objects = insertion.o merge.o sort.o bubble.o heap.o quick.o

.c.o:
	$(CC) $(CFLAGS) -c $<

all: sort-test

sort-test: $(objects) sort-test.o
	$(CC) $(CFLAGS) -o sort-test $(objects) sort-test.o

$(objects): $(headers)

clean:
	rm -f $(objects) sort-test sort-test.o
