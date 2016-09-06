# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 09:55:27 by vroussea          #+#    #+#              #
#    Updated: 2016/09/06 22:14:37 by vroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
INCLUDESDIR =.
CC =		gcc
CFLAGS =	-Wall -Wextra -Werror
SOURCES =	ft_printf.c
OBJS =		$(SOURCES:.c=.o)

all :		$(NAME)
$(NAME) :	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
norm :
			norminette $(SOURCES) libft.h get_next_line.h
clean :
			-rm  $(OBJS)
fclean :	clean
			-rm  -f $(OUT) $(NAME)
re :		fclean all
