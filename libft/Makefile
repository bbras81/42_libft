# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 14:41:38 by brunmigu          #+#    #+#              #
#    Updated: 2025/04/09 17:17:19 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isascii.c \
			 ft_isalnum.c \
			 ft_isprint.c\
			 ft_tolower.c \
			 ft_toupper.c \
			 ft_bzero.c \
			 ft_memset.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_strchr.c \
			 ft_strlen.c \
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_strrchr.c \
			 ft_strncmp.c\


OBJS = ${SRCS:.c=.o}

RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
COMPILER = cc
INCLUDE = -I .


.o:.c
	${COMPILER} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}
	
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
