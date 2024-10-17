SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_toupper.c ft_tolower.c

NAME = libft.a

MAIN = main.c

all: $(NAME)

$(NAME): $(MAIN)
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME) $(MAIN)
fclean:
	rm -f $(NAME)
re: fclean all
