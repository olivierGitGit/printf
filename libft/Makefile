# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:34:55 by olcoste           #+#    #+#              #
#    Updated: 2022/11/29 11:19:36 by olcoste          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Werror -Wextra

RM = rm -f

SRC = 	ft_strncmp.c \
		ft_strlen.c  \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_memchr.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c 

BONUS_SRC = ft_lstnew.c \
            ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c
			
			


OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)
		
.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS_SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_SRC)

clean:
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re