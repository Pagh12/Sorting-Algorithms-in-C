CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2 -Iinclude

SRC = src/Algorithms/insertion_sort.c src/Algorithms/merge_sort.c
OBJS = $(SRC:.c=.o)

# executables
TEST = test_runner
EXAMPLE = example

all: $(TEST)

$(TEST): test/main.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(EXAMPLE): examples/main.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST) $(EXAMPLE)
