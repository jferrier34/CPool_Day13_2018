##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	btree_create_node.c	/
		btree_apply_prefix.c	


OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

all: $(NAME)

$(NAME):	$(OBJ)
		ar rc ../$(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.o

re: fclean all

