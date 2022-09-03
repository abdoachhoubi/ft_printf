# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 19:52:21 by aachhoub          #+#    #+#              #
#    Updated: 2022/09/03 20:00:13 by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar ft_putstr ft_putnbr ft_putnbr_u \
      ft_putnbr_base ft_print_memory ft_printf
OBJ = $(SRC:=.o)
NAME = libftprintf.a
HEADER = ft_printf.h
LIBR = ar -rc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

all : $(NAME)

$(NAME): $(OBJ)
	@$(LIBR) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
