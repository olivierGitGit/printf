# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:45:49 by olcoste           #+#    #+#              #
#    Updated: 2022/12/08 12:04:49 by olcoste          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc -Wall -Werror -Wextra

RM = rm -f

SRC = ft_printf.c \
	  ft_ad.c \
	  ft_base.c \
	  ft_check.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_unsigned.c 

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)
	
clean: 
	$(RM) $(OBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all bonus clean fclean re