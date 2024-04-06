$(info $(SHELL))

default: all

all: Swap

Swap: swap.c
	gcc -o Swap swap.c main.c

Memcpy: memcpy.c
	gcc -o Memcpy memcpy.c main.c

Strchr: strchr.c
	gcc -o Strchr sstrchr.c main.c

Strspn: strspn.c
	gcc -o Strspn strspn.c main.c
	
clean:
	rm Swap Memcpy Strspn