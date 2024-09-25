SRCS= main.c
NAME=ft_display_file
OBJS=$(SRCS:.c=.o)
CC=gcc
FLAGS= -Wall -Wextra -Werror -Iinclude

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}