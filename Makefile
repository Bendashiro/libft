# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 19:15:42 by hibenfet          #+#    #+#              #
#    Updated: 2019/11/25 11:02:42 by hibenfet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_strlcat.c ft_putnbr_fd.c ft_strchr.c \
ft_putendl_fd.c ft_strdup.c ft_strjoin.c ft_putstr_fd.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_strtrim.c ft_split.c ft_strrchr.c ft_memccpy.c ft_memmove.c
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
ft_lstmap_bonus.c ft_lstsize_bonus.c
#SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

OBJB = $(BONUS:.c=.o)

all : $(NAME)
#Indexation de la librairie
$(NAME) : $(OBJ) libft.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
#Compilation des fichiers .c en .o
bonus : $(OBJB) libft.h
		ar rc $(NAME) $(OBJB)
		ranlib $(NAME)

%.o	: %.c
		$(CC) $(CFLAGS) -c -o $@ $<


clean :
		rm -rf *.o

fclean : clean
		rm -rf $(NAME)

re : fclean all

rebonus : fclean bonus
