# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 16:10:23 by rothomps          #+#    #+#              #
#    Updated: 2019/04/14 18:15:44 by rothomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = libft.h

SRC = ft_putchar.c ft_putendl.c ft_putstr.c ft_strlen.c ft_putnbr.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_memset.c ft_bzero.c ft_strcpy.c ft_memcpy.c ft_memccpy.c\
	  ft_memmove.c ft_memchr.c ft_strncpy.c ft_memcmp.c ft_strdup.c\
	  ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_toupper.c ft_tolower.c\
	  ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_atoi.c\
	  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
	  ft_strstr.c ft_strnstr.c ft_memalloc.c ft_memdel.c ft_strnew.c\
	  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c\
	  ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
	  ft_trim.c ft_wrdc.c ft_strndup.c ft_strsplit.c ft_wrdl.c\
	  ft_lstnew.c ft_itoa.c ft_lstdelone.c ft_lstdel.c\
	  ft_lstadd.c ft_lstiter.c ft_lstmap.c  ft_strdel.c get_next_line.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re norm
