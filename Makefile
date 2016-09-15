# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 09:55:27 by vroussea          #+#    #+#              #
#    Updated: 2016/09/15 18:51:52 by vroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
INCLUDES =	libft/libft.a
EXE =		test
HEADER =	ft_printf.h
MAKELIB =	make -C libft/
INCLUDESDIR =.
CC =		gcc
CFLAGS =	-Wall -Wextra -Werror
SOURCES =	ft_printf.c main.c hashing.c conv.c# analyse.c
OBJS =		$(SOURCES:.c=.o)

all :		$(NAME)
test :		$(OBJS) $(HEADER) Makefile
			$(MAKELIB)
			$(CC) $(CFLAGS) -c $(SOURCES)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJS) $(INCLUDES)
			
$(NAME) :	$(OBJS)
			$(MAKELIB)
			ar rc $(NAME) $(OBJS) $(INCLUDES)
			ranlib $(NAME)
norm :
			norminette $(SOURCES) $(HEADER)
clean :
			-rm  $(OBJS)
fclean :	clean
			-rm  -f $(NAME) $(EXE)
			$(MAKELIB) fclean
re :		fclean all
