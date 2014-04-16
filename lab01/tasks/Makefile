CC = gcc
CFLAGS = -Wall -g -std=c99 
PKG = `pkg-config --cflags --libs gsl`
SRC = $(wildcard *.c)
OBJECTS = $(SRC:.c=.o)
PROGS = $(OBJECTS:.o=)

all: $(PROGS)

$(PROGS): $(OBJECTS)
	$(CC) $(CFLAGS) $@.c $(PKG) -o $@ -lm
	
clean:
	rm -f $(PROGS)
	rm -f $(OBJECTS)
	
.PHONY = clean all