# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 12:15:49 by amyrta            #+#    #+#              #
#    Updated: 2019/09/11 19:27:06 by amyrta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c
SRCO = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o \
ft_memcmp.o
FLAG = -Wall -Wextra -Werror
INCL = -I $(HEADER) -c 

all: $(NAME)

$(NAME) :
	gcc $(FLAG) $(INCL) *.c
	ar rc $(NAME) *.o
	/bin/rm -f *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

