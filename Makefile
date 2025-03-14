CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./include
SRC = src/functions.c src/main.c
OBJ = $(SRC:.c=.o)
NAME = my_program
TEST_SRC = tests/test_functions.c src/functions.c
TEST_NAME = unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(TEST_NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run: $(TEST_NAME)
	./$(TEST_NAME)

$(TEST_NAME): $(TEST_SRC)
	$(CC) -o $(TEST_NAME) $(TEST_SRC) --coverage -lcriterion

.PHONY: all clean fclean re tests_run