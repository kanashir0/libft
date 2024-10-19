# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 11:50:51 by gyasuhir          #+#    #+#              #
#    Updated: 2024/10/19 11:52:09 by gyasuhir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memset.c \
	ft_bzero.c

NAME = libft.a

MAIN = main.c

all: $(NAME)

$(NAME): $(MAIN)
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME) $(MAIN)

fclean:
	rm -f $(NAME)

re: fclean all

debug:
	gcc -g3 -Wall -Wextra -Werror $(SRCS) -o $(NAME) $(MAIN)

