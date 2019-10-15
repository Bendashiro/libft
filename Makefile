CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(NAME)
#Indexation de la librairie
$(NAME) : $(OBJ) libft.h
	ar rc $(NAME) $(OBJ)
#Compilation des fichiers .c en .o
%.o	: %.c
	$(CC) $(CFLAGS) -c $(SRC)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)