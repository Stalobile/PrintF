# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 13:51:44 by smarco            #+#    #+#              #
#    Updated: 2022/11/02 13:52:35 by smarco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

RM = rm -f

INCLUDE = -I ./

CFLAGS = -Wall -Wextra -Werror -c

HEADER = printf.h
# ici on définit les modules sources de notre projet, séparés par un espace
SRC =	ft_check.c ft_hexa.c ft_integer.c ft_printf.c ft_putchar.c \
		ft_itoa.c 

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ)
	@echo "\n\t... Suppression des objets...\n"

fclean: clean
	rm -f $(NAME)
	@echo "\t... suppression lib et bonus...\n"

re: fclean all
