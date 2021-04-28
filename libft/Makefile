# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/05 12:04:24 by sgoffaux          #+#    #+#              #
#    Updated: 2021/04/28 12:19:09 by sgoffaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_isascii.c \
			srcs/ft_memcpy.c \
			srcs/ft_strjoin.c \
			srcs/ft_strrchr.c \
			srcs/ft_atoi.c \
			srcs/ft_isdigit.c \
			srcs/ft_memmove.c \
			srcs/ft_strlcat.c \
			srcs/ft_strtrim.c \
			srcs/ft_bzero.c \
			srcs/ft_isprint.c \
			srcs/ft_memset.c \
			srcs/ft_strlcpy.c \
			srcs/ft_substr.c \
			srcs/ft_calloc.c \
			srcs/ft_memccpy.c \
			srcs/ft_split.c \
			srcs/ft_strlen.c \
			srcs/ft_tolower.c \
			srcs/ft_isalnum.c \
			srcs/ft_memchr.c \
			srcs/ft_strchr.c \
			srcs/ft_strncmp.c \
			srcs/ft_toupper.c \
			srcs/ft_isalpha.c \
			srcs/ft_memcmp.c \
			srcs/ft_strdup.c \
			srcs/ft_strnstr.c \
			srcs/ft_itoa.c \
			srcs/ft_strmapi.c \
			srcs/ft_putchar_fd.c \
			srcs/ft_putstr_fd.c \
			srcs/ft_putendl_fd.c \
			srcs/ft_putnbr_fd.c \
			srcs/ft_itoa_hex.c \
			srcs/ft_uitoa.c \
			srcs/ft_strmap.c

BONUS	=	bonus/ft_lstnew.c \
			bonus/ft_lstadd_front.c \
			bonus/ft_lstsize.c \
			bonus/ft_lstlast.c \
			bonus/ft_lstadd_back.c \
			bonus/ft_lstdelone.c \
			bonus/ft_lstclear.c \
			bonus/ft_lstiter.c \
			bonus/ft_lstmap.c

OBJS	=	$(SRCS:.c=.o)

BOBJS	=	$(BONUS:.c=.o)

CC		=	gcc

INCLUDE =	includes

CFLAGS	=	-Wall -Wextra -Werror -I$(INCLUDE)

RM		=	rm -f

NAME	=	libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

bonus:		$(NAME) $(BOBJS)
			ar r $(NAME) $(BOBJS)

so:			$(OBJS) $(BOBJS)
			gcc -shared -o libft.so $(OBJS) $(BOBJS)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
