# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jolevy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/06 17:34:31 by jolevy            #+#    #+#              #
#    Updated: 2018/04/06 17:50:48 by jolevy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isdigit.c ft_program_name.c ft_putendl.c ft_puterror.c \
		ft_putstr.c ft_remove_extension.c ft_strcat.c ft_strchr.c ft_strcmp.c \
		ft_strcpy.c ft_strcut.c ft_strdup.c ft_strjoin.c ft_strlen.c \
		ft_strncpy.c ft_strnew.c ft_strrchr.c ft_strsplit.c get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o:%.c
	@gcc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "[INFO] Library [$(NAME)] created!"

clean:
	@rm -f $(OBJ)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Library [$(NAME)] removed!"

re:	fclean all

.PHONY: all, clean, fclean, re
