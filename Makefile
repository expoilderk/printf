INCLUDE = ./includes

SRC = ./sources/*.c

UTILS = ./utils/*.c

OBJ = $(SRC:.c=.o) $(UTILS:.c=.o)

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
