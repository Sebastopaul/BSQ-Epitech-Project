##
## EPITECH PROJECT, 2020
## bsq
## File description:
## lib Makefile
##

SRC	=	$(shell find . -type f -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../$(NAME)
	rm -f $(OBJ)
	mkdir -p ../../include
	cp my.h ../../include/my.h
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME)
	rm -f ../../include/my.h

re:	fclean all
