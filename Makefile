CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = prog
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : 