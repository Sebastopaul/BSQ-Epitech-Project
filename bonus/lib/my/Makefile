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
	cp my.h structures.h prototypes.h ../../include
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../$(NAME)
	rm -f ../../include/my.h
	rm -f ../../include/structures.h ../../include/prototypes.h

re:	fclean all
