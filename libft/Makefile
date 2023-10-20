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

SRCS =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c\
ft_tolower.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
ft_calloc.c ft_memcmp.c ft_toupper.c ft_strdup.c ft_strjoin.c ft_strtrim.c\
ft_substr.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
ft_lstdelone.c ft_lstiter.c ft_lstmap.c\
ft_lstnew.c ft_lstsize.c ft_lstlast.c

BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

INCLUDE = libft.h
BONUS_NAME = .bonus

LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS)

bonus: $(BONUS_NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS_OBJS)

re: fclean all

$(BONUS_NAME): $(OBJS) $(BONUS_OBJS)
	$(LIB) $(NAME) $(OBJS) $(BONUS_OBJS)
	$(LIB) $(BONUS_NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re