# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 13:26:52 by gaducurt          #+#    #+#              #
#    Updated: 2024/11/19 07:01:30 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SRC = 	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strncmp.c	\
		ft_strrchr.c	\
		ft_bzero.c		\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_strdup.c		\
		ft_calloc.c		\
		ft_memset.c		\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile $(HEADER)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re