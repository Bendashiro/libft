CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = prog
SRC = $(willcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o	: %.c
	$(CC) $(CFLAGS) -o $(OBJ) -c $(SRC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(EXEC)