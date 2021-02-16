##
## EPITECH PROJECT, 2020
## bsq
## File description:
## Makefile
##

SRC	=	main.c	\
		finder.c	\
		error_handler.c	\
		reader.c

LIB_INCLUDE	=	include/my.h	\
				include/structures.h	\
				include/prototypes.h

CFLAGS	=	-Iinclude -Llib -lmy -Wall -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(LIB_INCLUDE) $(NAME)

clean:
	make clean -C lib/my
	rm -rf $(OBJ)

$(LIB_INCLUDE):
	make -C lib/my

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	make clean

fclean:	clean
	rm -rf $(NAME)
	make fclean -C lib/my

re:	fclean all
