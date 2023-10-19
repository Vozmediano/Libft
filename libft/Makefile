# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvozmedi <cvozmedi@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 10:20:39 by cvozmedi          #+#    #+#              #
#    Updated: 2023/10/16 15:16:41 by cvozmedi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c\
ft_tolower.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
ft_calloc.c ft_memcmp.c ft_toupper.c ft_strdup.c ft_strjoin.c ft_strtrim.c\
ft_substr.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
