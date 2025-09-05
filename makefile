CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2 -Iinclude

# grab all .c files in src/Algorithms
SRC = $(wildcard src/Algorithms/*.c)
OBJS = $(patsubst %.c, %.o, $(SRC))

# executables
TEST = test_runner
EXAMPLE = example

all: $(TEST) $(EXAMPLE)

$(TEST): test/main.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(EXAMPLE): examples/main.c $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST) $(EXAMPLE)
