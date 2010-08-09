CC = gcc
CFLAGS = -g -O0
headers = data.h
objects = stack.o

.c.o:
	$(CC) $(CFLAGS) -c $<

all: data-test

data-test: $(objects) data-test.o
	$(CC) $(CFLAGS) -o data-test $(objects) data-test.o

$(objects): $(headers)

clean:
	rm -f $(objects) data-test data-test.o
