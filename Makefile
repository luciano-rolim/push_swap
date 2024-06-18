# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 18:59:04 by lmeneghe          #+#    #+#              #
#    Updated: 2024/06/17 17:56:30 by lmeneghe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME			= push_swap

# Directories
LIBFT_DIR		= ./libft_original/

# Compiler and Flags
CC				= cc
CFLAGS			= -Wall -Wextra -Werror

# Libraries
LIBFT			= $(LIBFT_DIR)libft.a

# Source Files
SRC_FILES		= calc_utils.c \
				  create_list.c \
				  move_a_to_b.c \
				  moves_calc.c \
				  push_swap.c \
				  sort_list.c \
				  special_cases.c \
				  lists_functions/current_smaller.c \
				  lists_functions/current_bigger.c \
				  lists_functions/is_bigger.c \
				  lists_functions/is_smaller.c \
				  lists_functions/swap_lstadd_back.c \
				  lists_functions/swap_lstadd_front.c \
				  lists_functions/swap_lstclear.c \
				  lists_functions/swap_lstdelone.c \
				  lists_functions/swap_lstlast.c \
				  lists_functions/swap_lstnew.c \
				  lists_functions/swap_lstsize.c \
				  lists_functions/is_sorted.c \
				  movements/movement_utils.c \
				  movements/push.c \
				  movements/reverse.c \
				  movements/rotate.c \
				  movements/swap.c

# Compiler SRC_FILES into .o files
OBJS	= $(SRC_FILES:%.c=%.o)

#Line 1: ensure all .o files are created + libft itself
#Line 2: compiles everything to generate push_swap program
$(NAME):		$(OBJS) $(LIBFT)
				$(CC) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

#Command to execute make inside libft folder and generate libft.a file
$(LIBFT):
				make -C $(LIBFT_DIR)

#Make instruction on how to compile .o if is not up to date
%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

#Standard all command
all:			$(NAME)

#clean > removes all .o files on all directories
clean:
				find . -name "*.o" -delete

#fclean > call clean + remove push_swap file
#extra rule to fclean the libft library
fclean:			clean
				rm -f $(NAME)
				make fclean -C $(LIBFT_DIR)

#Standard re command
re:				fclean all

#Standard .PHONY protection
.PHONY:			all clean fclean re
