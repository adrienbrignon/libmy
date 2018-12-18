##
## EPITECH PROJECT, 2018
## libmy
## File description:
## The library main Makefile.
##

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -Iinclude -Llib -O2
LDFLAGS = -lmy

NAME = lib/libmy.a

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

TEST_NAME = test

TEST_SRCS = $(wildcard tests/*.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) src/*.o src/*.gc*
	$(RM) test/*.o tests/*.gc*

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TEST_NAME)

$(TEST_NAME): CFLAGS += -coverage
$(TEST_NAME): LDFLAGS += -lcriterion
$(TEST_NAME): $(NAME) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJS) $(LDFLAGS)
	./$@

re: fclean all

.PHONY: clean fclean re
