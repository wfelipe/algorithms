CC = gcc
CFLAGS = -g
headers = sort.h
objects = insertion.o merge.o sort.o bubble.o

.c.o:
	$(CC) $(CFLAGS) -c $<

all: sort-test

sort-test: $(objects) sort-test.o
	$(CC) $(CFLAGS) -o sort-test $(objects) sort-test.o

$(objects): $(headers)

clean:
	rm $(objects) sort-test sort-test.o
