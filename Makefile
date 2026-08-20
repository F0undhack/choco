##
## EPITECH PROJECT, 2026
## my_ls
## File description:
## Makefile
##

CC      =   clang
NAME    =   my_ls

SRC     =   src/my_ls.c\
            src/display_float.c\
            src/display_hex_maj.c\
            src/display_hex_min.c\
            src/display_pointeur.c\
            src/function_convestion.c\
            src/mini_printf.c\
            src/my_printf.c\
            lib/my/my_put_nbr.c\
            lib/my/my_put_nb.c\
            lib/my/my_put_octal.c\
            lib/my/my_putstr.c\
            lib/my/my_putchar.c

OBJS    =   $(SRC:.c=.o)

LIB_OBJS =  lib/my/my_put_nbr.o\
            lib/my/my_put_octal.o\
            lib/my/my_putstr.o\
            lib/my/my_putchar.o

TESTS_SRC = tests/my_tests.c
TESTS_OBJS = $(TESTS_SRC:.c=.o)

all:    $(NAME)

$(NAME):    $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS) $(TESTS_OBJS)

fclean: clean
	rm -f $(NAME) unit_tests

re: fclean all

tests_run: $(LIB_OBJS) $(TESTS_OBJS)
	$(CC) -o unit_tests $(LIB_OBJS) $(TESTS_OBJS) -lcriterion --coverage
	./unit_tests

.PHONY: all clean fclean re tests_run