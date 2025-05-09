NAME = libft.a

SRC = ft_atoi.c \
		ft_memset.c \
		ft_bzero.c \
		ft_calloc.c

CC = cc

CFLAGS = -Werror -Wextra -Wall

AR = ar rcs

RM = rm -f

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
