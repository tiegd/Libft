# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 13:26:52 by gaducurt          #+#    #+#              #
#    Updated: 2024/11/18 07:41:03 by gaducurt         ###   ########.fr        #
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
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ) Makefile $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) ar -rcs

#$(NAME): $(OBJ) Makefile $(HEADER)
#	ar -rcs -o $@ -c $<

#$(OBJ): $(SRC)
%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re