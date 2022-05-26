SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_memset.c ft_strlen.c \
ft_toupper.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c \
ft_tolower.c t_strncmp.c ft_strchr.c ft_strrchr.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ) ar

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

test:
	gcc tester.c ft_*.c -o tester
	./tester
	rm -f tester

re: fclean $(NAME)

ar:
	ar rcs $(NAME) $(OBJ)
