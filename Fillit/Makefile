# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 15:23:37 by rothomps          #+#    #+#              #
#    Updated: 2019/05/20 19:21:51 by rothomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

HEAD = fillit.h

GCC = gcc

FLAGS = -g -Wall -Wextra -Werror

LIBFLAGS = -L./libft -lft

LIBFT = libft

LIB = libft.a

SRC = chk_sym.c chk_cnect.c main.c mk_2d.c sve_tet.c mk_3d.c board.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	$(GCC) $(FLAGS) -c $(SRC) -I $(LIBFT)
	$(GCC) -o $(NAME) $(OBJ) $(LIBFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: exe all clean fclean re norm
