INCLUDE = ft_printf.h

SRC = ft_printf.c is_args.c scan_args.c \
	  print_char.c print_str.c print_nbr.c \
	  print_ui.c print_hexa.c print_pointer.c

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
	$(CC) $(SRC) -g ./tests/test.c -o test

clean:
	$(RM) $(OBJ) test

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
