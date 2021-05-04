# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/28 14:01:38 by sgoffaux          #+#    #+#              #
#    Updated: 2021/05/04 10:56:04 by sgoffaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_printf.c \
			srcs/ft_flags.c \
			srcs/ft_width.c \
			srcs/ft_precision.c \
			srcs/ft_convert.c \
			srcs/ft_c.c \
			srcs/ft_s.c \
			srcs/ft_d.c \
			srcs/ft_u.c \
			srcs/ft_x.c \
			srcs/ft_percent.c \
			srcs/ft_utils.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

INCLUDE =	includes

CFLAGS	=	-Wall -Wextra -Werror -I$(INCLUDE)

RM		=	rm -f

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			$(MAKE) -C libft
			cp -p libft/libft.a $(NAME)
			ar rcs $(NAME) $(OBJS)

bonus:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(MAKE) clean -C libft
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C libft
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re