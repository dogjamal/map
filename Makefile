NAME = map
MN = main.c
SRCS = *.c
HEAD = ./includes/ft.h
FLAGS = -Wall -Wextra -Werror -I ${HEAD}
OBJT = ${SRCS:.c=.o}
RM = rm -f
CC = gcc

.c.o: ${OBJT}
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJT}
	${CC} ${FLAGS} ${OBJT} -o ${NAME} 

clean:
	${RM} ${OBJT}

fclean: clean
	${RM} ${NAME} ${LIB}

.PHONY: all clean fclean
