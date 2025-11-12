# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 13:26:52 by gaducurt          #+#    #+#              #
#    Updated: 2025/11/12 17:32:06 by gaducurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

INC =	libft.h						\
		gnl/get_next_line_bonus.h	\
		ft_printf/ft_printf.h		\
		mylib/mylib.h				

OBJDIR =	.obj

SRC = 	ft_isalpha.c					\
		ft_isdigit.c					\
		ft_isalnum.c					\
		ft_isascii.c					\
		ft_isprint.c					\
		ft_strlen.c						\
		ft_strlcat.c					\
		ft_strlcpy.c					\
		ft_strncmp.c					\
		ft_strrchr.c					\
		ft_bzero.c						\
		ft_toupper.c					\
		ft_tolower.c					\
		ft_strchr.c						\
		ft_strnstr.c					\
		ft_atoi.c						\
		ft_strdup.c						\
		ft_calloc.c						\
		ft_memset.c						\
		ft_memcpy.c						\
		ft_memmove.c					\
		ft_memchr.c						\
		ft_memcmp.c						\
		ft_substr.c						\
		ft_strjoin.c					\
		ft_strtrim.c					\
		ft_split.c						\
		ft_itoa.c						\
		ft_strmapi.c					\
		ft_striteri.c					\
		ft_putchar_fd.c					\
		ft_putstr_fd.c					\
		ft_putendl_fd.c					\
		ft_putnbr_fd.c					\
		ft_lstnew_bonus.c				\
		ft_lstadd_front_bonus.c			\
		ft_lstsize_bonus.c				\
		ft_lstlast_bonus.c				\
		ft_lstadd_back_bonus.c			\
		ft_lstdelone_bonus.c			\
		ft_lstclear_bonus.c				\
		ft_lstiter_bonus.c				\
		ft_lstmap_bonus.c				\
		gnl/get_next_line_bonus.c		\
		gnl/get_next_line_utils_bonus.c	\
		ft_printf/ft_printf.c			\
		ft_printf/ft_putchar.c			\
		ft_printf/ft_putnbr_base.c		\
		ft_printf/ft_putnbr_unsigned.c	\
		ft_printf/ft_putnbr.c			\
		ft_printf/ft_putptr.c			\
		ft_printf/ft_putstr.c			\
		mylib/db_free.c					\
		mylib/ft_atof.c					\
		mylib/ft_strcmp.c				\
		mylib/multi_split.c				\

OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))

all: .print_header $(NAME)

$(NAME): $(OBJ) $(INC)
	ar rcs $(NAME) $?

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

%.o : %.c Makefile $(INC)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.print_header:
	$(call DISPLAY_TITLE)

.PHONY: all fclean re

########################################################################################################################
#                                                       COLORS                                                         #
########################################################################################################################

DEF_COLOR 	= \033[0;39m
GREEN		= \033[1;92m
BLUE		= \033[0;94m

########################################################################################################################
#                                                       DISPLAY                                                        #
########################################################################################################################

define DISPLAY_TITLE
						@echo "$(BLUE)  _      _____ ____  ______ _______ "
						@echo " | |    |_   _|  _ \|  ____|__   __|"
						@echo " | |      | | | |_| | |__     | |   "
						@echo " | |      | | |  _ <|  __|    | |   "
						@echo " | |____ _| |_| |_| | |       | |   "
						@echo " |______|_____|____/|_|       |_|   "
						@echo "$(GREEN)                         by gaducurt$(DEF_COLOR)"
						@printf "\n"
endef
