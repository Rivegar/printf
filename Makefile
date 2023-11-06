# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 10:01:21 by arivero-          #+#    #+#              #
#    Updated: 2023/11/06 09:10:33 by arivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -rf

SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c ft_printhexl.c ft_printhexu.c ft_printptr.c ft_printunbr.c
OBJ_DIR = obj
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

$(OBJ_DIR)/%.o:	%.c
						$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(LIBFT)	$(OBJ_DIR)	$(OBJS)
			cp	$(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR) all
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJ_DIR)

fclean: clean
			make -C $(LIBFT_DIR) fclean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
