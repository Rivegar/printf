# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 10:01:21 by arivero-          #+#    #+#              #
#    Updated: 2023/05/09 10:16:53 by arivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft

all: $(NAME)

$(NAME): $(OBJ) | libft
	ar rcs $(NAME) $(OBJ) $(LIBFTDIR)/*.o

libft:
	make -C $(LIBFTDIR)

clean:
	$(RM) $(OBJ) $(LIBFTDIR)/*.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
