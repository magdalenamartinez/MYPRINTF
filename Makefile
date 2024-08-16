##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## funcion which
##


TEST	= 	my_printf_tests.c	\

NAME	=	my_printf

TESTNAME	=	unit_tests

LIB	=	-L lib/my/ -lmy

INCLUDE	=	-I ./include/


all: $(NAME)

$(NAME): library

clean:
	rm -f $(NAME)

fclean: clean
	rm -f libmy.a
	rm -f lib/my/libmy.a
	rm -f ./lib/my/*.o

re: fclean all

library: fclean
	make -C lib/my/ re

exec: re
	./$(NAME)

coding_style: fclean tests_cleaner
	coding-style ./ checkFolder/

$(TESTNAME): tests_cleaner
	gcc -o $(TESTNAME) $(SRC) tests/$(TEST) --coverage -lcriterion -L./ -lmy

run_tests: $(TESTNAME)
	./unit_tests

tests_cleaner:
	rm -f unit_tests*

gcovr:
	gcovr --exclude tests/

branches:
	gcovr --exclude tests/ --branches
