NAME = libft.a

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_strjoin.c \
		ft_substr.c

CC = cc

CFLAGS = -Werror -Wextra -Wall

AR = ar rcs

RM = rm -f

OBJ = $(SRC:.c=.o)
#BOBJ = $(BSRC:.c=.o)

all: $(NAME) #all es el nombre del comando y lo que va después es el comando que quieres que haga

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# bonus: $(OBJ) $(BOBJ)
# $(AR) $(NAME) $(OBJ) $(BOBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
