# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 10:27:58 by ybenoit           #+#    #+#              #
#    Updated: 2016/11/23 16:00:10 by arive-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fillit 

SRC= ./srcs/*.c
OBJ= ./srcs/*.o

CC= gcc
CFLAGS= -Wall -Wextra -Werror

LIBFT= ./libft//libft.a
LIBINC= -I./libft

INCDIR= -I./includes/

all: libft $(NAME)

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft/

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(LIBINC) $(INCDIR) $(LIBFT)

$(OBJ):
	$(CC) -c $(CFLAGS) $(SRC) $(LIBINC) $(INCDIR) $(LIBFT)
	
clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
