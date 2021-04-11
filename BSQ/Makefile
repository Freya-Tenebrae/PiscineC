# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 08:35:06 by cmaginot          #+#    #+#              #
#    Updated: 2021/04/01 11:40:58 by llalba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET=bsq
SOURCE=$(addprefix ${FOLDER}/, ft_load_file.c ft_load_stdin.c ft_map_utils.c \
       ft_print.c ft_solve.c ft_str_utils.c ft_stdin_utils.c main.c)
OBJECT=$(SOURCE:.c=.o)

HEADER=includes
FOLDER=srcs

SIZE=40 20 10

CC=gcc
CFLAGS=-Wall -Werror -Wextra
RM=rm -f

all: $(TARGET)

$(TARGET): $(OBJECT)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -o $@ -c $(CFLAGS) $< -I $(HEADER)

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f $(TARGET)

re: fclean all

run:
	mapgenerator.pl $(SIZE) | ./$(TARGET)
