# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboiko <mboiko@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 17:49:57 by mboiko            #+#    #+#              #
#    Updated: 2022/10/09 13:57:51 by mboiko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_calloc.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_putstr_fd.c ft_strlcpy.c\
		ft_putchar_fd.c ft_strlcat.c  ft_strchr.c ft_strlen.c ft_strncmp.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strdup.c\
		ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c ft_strjoin.c\
		ft_strmapi.c ft_strtrim.c ft_strnstr.c ft_itoa.c ft_split.c

LIST_BONUS =    ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c 			

OBJ = $(LIST:.c=.o)

OBJ_BONUS = $(LIST_BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
	ar -rc  $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS) $(OBJ)
	ar -rc $(NAME) $(OBJ_BONUS) $(OBJ)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all 

.PHONY:			all clean bonus fclean re