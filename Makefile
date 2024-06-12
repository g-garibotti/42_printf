# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 16:32:04 by ggaribot          #+#    #+#              #
#    Updated: 2024/05/31 17:35:23 by ggaribot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRC_DIR		=	./srcs/

SRC		=	classic.c	base16.c	ft_printf.c \
			ft_ptr.c

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${SRCS:.c=.o}

HEAD		=	./includes/

CC		=	cc

CFLAGS		=	-Wall -Wextra -Werror -c -I includes/

AR		=	ar rcs

RM		=	rm -f

.c.o:
			$(CC) -c $(CFLAGS) $< -o $@ $(INCLUDES)

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

run: $(NAME)
	$(CC) $(CLFAGS) main.c libftprintf.a $(INCLUDES)
	./a.out
	rm a.out

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			bonus all clean fclean re