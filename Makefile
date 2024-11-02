# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 11:50:51 by gyasuhir          #+#    #+#              #
#    Updated: 2024/11/02 11:54:21 by gyasuhir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
			 ft_lstlast_bonus.c ft_lstsize_bonus.c \
			 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c \
			 ft_lstmap_bonus.c

OBJECTS = $(SRCS:%.c=%.o)

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c
	@cc -Wall -Wextra -Werror -c $< $(NAME:%.a=%.h)
	@ar rcs $(NAME) $@

bonus: all $(BONUS_OBJS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
