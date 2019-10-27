CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_strlcat.c ft_putnbr_fd.c ft_strchr.c \
ft_putendl_fd.c ft_strdup.c ft_strjoin.c ft_putstr_fd.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_strtrim.c ft_split.c ft_strrchr.c
#SRC = $(wildcard *.c)
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