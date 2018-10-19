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

re: fclean all

tests_run: CFLAGS += -lcriterion -coverage
tests_run: clean $(OBJS) $(TEST_OBJS)
	$(CC) -o $(TEST_BIN) $(OBJS) $(TEST_OBJS) $(CFLAGS)
	./$(TEST_BIN)

.PHONY: clean fclean re
