# Choose your gcc compiler
CC = gcc
CFLAGS = -Werror -Wall -Wextra -pedantic -std=c11
PROGRAMS = main
ASMFILES = bubblesort.s
LIBS = bubblesort.c

.PHONY: clean all

main: main.c 
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)
#	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

bs_asm: bubblesort.c 
	$(CC) $(CFLAGS) -Og -S -o bubblesort.s $<

test:
	

all: 
	make $(PROGRAMS)

clean: 
	rm -f $(PROGRAMS) $(ASMFILES)