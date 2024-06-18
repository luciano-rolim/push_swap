# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 10:55:24 by lmeneghe          #+#    #+#              #
#    Updated: 2024/06/17 15:22:56 by lmeneghe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

cFiles = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_atol.c \
	ft_isodd.c ft_lower_number.c ft_isspace.c ft_split_isspace.c

bFiles = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

oFiles = $(cFiles:%.c=%.o)

bonus_oFiles = $(bFiles:.c=.o)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

bonus_%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(oFiles)
	ar rc $(NAME) $(oFiles)
	ranlib $(NAME)

all: $(NAME)

bonus: $(bonus_oFiles)
	make oFiles="$(bonus_oFiles)" all

clean:
	rm -f $(oFiles) $(bonus_oFiles)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all bonus clean fclean re
