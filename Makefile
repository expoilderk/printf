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

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
