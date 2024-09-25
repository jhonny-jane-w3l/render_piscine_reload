# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 20:36:14 by cw3l              #+#    #+#              #
#    Updated: 2024/09/25 15:58:33 by cw3l             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##constantes:
# get the files on folder srcs
SRCS= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

# define compilateur
CC= gcc

# compilation flag
FLAGS= -Iinclude -Werror -Wextra -Wall -c

# convert .c to .o
OBJS=$(SRCS:.c=.o)

# Name of the lib
NAME=libft.a

##commandes
# entry point
all:  ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

# remove object files
clean:
	rm -rf srcs/*.o

# remove object files and the binarie ${NAME}
fclean: clean
	rm -rf ${NAME}

# clean + fclean + all
re: fclean ${NAME} 

# phony targets ("indicates that the values ​​are not filenames")
.PHONY: all clean re