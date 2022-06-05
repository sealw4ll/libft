SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_bzero.c ft_memset.c ft_strlen.c \
ft_toupper.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c \
ft_tolower.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_isascii.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_split.c

OBJ = $(SRC:.c=.o)

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all: $(NAME) bonus ar

$(NAME): $(OBJ) 

clean:
	@rm -f $(OBJ)
	@rm -f $(BONUS_OBJ)
	@echo cleaned objects

fclean: clean
	@rm -f $(NAME)
	@echo cleaned all

test:
	@$(CC) tester.c ft_*.c -o tester 
	@./tester
	@rm -f tester

re: fclean $(NAME) 

ar:
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo archive made

bonus: $(BONUS_OBJ) 

norm:
	@norminette ft*.c libft.h

.PHONY: all clean fclean test re ar