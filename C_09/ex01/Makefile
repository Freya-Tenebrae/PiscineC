TARGET=libft.a
SRC=$(addprefix ${FOLDER}/, ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c)
OBJS=${SRC:.c=.o}

HEADER=includes
FOLDER=srcs

CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all: ${TARGET}

${TARGET}: ${OBJS}
	ar -rcs ${TARGET} ${OBJS}

%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}


clean:
	${RM} ${OBJS}

fclean: clean
	${RM} libft.a

re: fclean all
