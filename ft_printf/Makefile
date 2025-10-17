NAME := libftprintf.a

CC := clang

CFLAGS := -Wall -Werror -Wextra

SRC := ft_printf.c options.c

OBJ := $(SRC:.c=.o)

LIBFT := libft/libft.a

HEADERS := -I../libft

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean:	clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: clean fclean re all
