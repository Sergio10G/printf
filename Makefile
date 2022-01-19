# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiez-ga <sdiez-ga@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 17:54:02 by sdiez-ga          #+#    #+#              #
#    Updated: 2022/01/19 18:05:57 by sdiez-ga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	./src/printf.c				\
				./src/conversion_funcs.c	\
				./src/print_funcs.c			\
				./src/print_funcs_2.c		\
				./src/utils.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	./includes/printf.h

RM			=	rm -rf

COMP_LIB	=	ar rcs

$(NAME)			:	$(OBJS)
					cd libft && make all
					cp libft/libft.a $(NAME)
					$(COMP_LIB) $(NAME) $(OBJS)

%.o				:	%.c
					$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

all				:	$(NAME)

clean			:	
					cd libft && make clean
					$(RM) $(OBJS)

fclean			:	clean
					cd libft && make fclean
					$(RM) $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
