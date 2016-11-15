# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 10:27:58 by ybenoit           #+#    #+#              #
#    Updated: 2016/11/15 10:43:29 by ybenoit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fillit 

SRC= *.c

DIR = $(addprefix $(FILEDIR),$(SRC:.c=.o))

CC= gcc
CFLAGS= -Wall -Wextra -Werror

LIBFT= ./LibGitHub//libft.a
LIBINC= -I./LibGitHub
LIBLINK= -L./LibGitHub -lft

SRCDIR= ./srcs/
INCDIR= ./includes/
FILEDIR= ./Files/

all: obj libft $(NAME)

obj:
	/bin/mkdir -p $(FILEDIR)

$(REPDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(LIBINC) -I $(INCDIR) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./LibGitHub/

$(NAME): $(FILE)
	$(CC) $(LIBLINK) -o $(NAME) $(OBJ)

clean:
	/bin/rm -rf $(FILEDIR)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
