$(info $(SHELL))

default: all

all: Multi_tab

Multi_tab: times_table.c
	gcc -o Multi_tab times_table.c main.c

Natural: natural.c
	gcc -o Natural natural.c main.c

Fibonacci: fibonacci.c
	gcc -Wall -Werror -pedantic -Wextra -std=gnu89 -o Fibonacci fibonacci.c main.c

Fizz: fizz_buzz.c
	gcc -Wall -Werror -pedantic -Wextra -std=gnu89 -o Fizz fizz_buzz.c main.c
	
clean:
	rm Multi_tab Natural Fibonacci Fizz