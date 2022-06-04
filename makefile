SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_memset.c ft_strlen.c \
ft_toupper.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c \
ft_tolower.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_isascii.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c 

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ) ar

clean:
	@rm -f $(OBJ)
	@echo cleaned objects

fclean: clean
	@rm -f $(NAME)
	@echo cleaned all

test:
	gcc tester.c ft_*.c -o tester
	./tester
	rm -f tester

re: fclean $(NAME)

ar:
	@ar rcs $(NAME) $(OBJ)
	@echo archive made

.PHONY: all clean fclean test re ar