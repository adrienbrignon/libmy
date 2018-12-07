##
## EPITECH PROJECT, 2018
## libmy
## File description:
## The library main Makefile.
##

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -Iinclude

NAME = lib/libmy.a

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

TEST_BIN = unit-tests

TEST_SRCS = $(wildcard tests/*.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) src/*.o src/*.gcda src/*.gcno src/*.c.gcov
	$(RM) tests/*.o tests/*.gcda tests/*.gcno tests/*.c.gcov

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TEST_BIN)

tests_run: CFLAGS += -coverage
tests_run: LDFLAGS += -lcriterion
tests_run: $(OBJS) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_BIN) $(OBJS) $(TEST_OBJS) $(LDFLAGS)
	./$(TEST_BIN)

re: fclean all

.PHONY: clean fclean test re
