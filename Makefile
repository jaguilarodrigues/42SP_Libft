# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/29 14:54:07 by jaqrodri          #+#    #+#              #
#    Updated: 2020/02/05 01:00:37 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft*.c
#OBJECTS = ft*.o
OBJECTS = $(SRCS:.c=.o)
INCLUDES = ./
all: $(NAME)
$(NAME):
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)	libft.h
	@ar -rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJECTS)
fclean: clean
	@/bin/rm -f $(NAME) 
re: fclean all