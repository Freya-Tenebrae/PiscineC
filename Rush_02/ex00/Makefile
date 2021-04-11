CC=gcc
CFLAGS=-Wall -Werror -Wextra
EXEC=rush-02
SRC=ft_atoi.c ft_group.c ft_sep_dict.c ft_pars_dictionnary.c main.c \
number_to_text.c ft_createstring.c ft_putstr.c
OBJ=$(SRC:.c=.o)
all: $(EXEC)
rush-02: $(OBJ)
	$(CC) -o $@ $^
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)
clean:
	rm -f *.o
fclean: clean 
	rm $(EXEC)
