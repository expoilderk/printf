INCLUDE = ft_printf.h

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

AR = ar -rcs
CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = rm -f

NAME = libftprintf.a

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

test:
	$(CC) $(SRC) ./tests/test.c -o test

clean:
	$(RM) $(OBJ) test

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
