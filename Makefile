# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/10/11 15:46:49 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
#INCLUDES_DIR = ./Includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./srcs/push_swap/libft -I ./srcs/push_swap -I ./printf
#CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR) -I ./srcs/push_swap/libft -I ./srcs/push_swap -I ./printf
RM = rm -f

SRCS =	srcs/push_swap/sort_five.c \
	srcs/push_swap/sort_three.c \
	srcs/push_swap/coordinate_compression.c \
	srcs/push_swap/create_node.c \
	srcs/push_swap/ps_calloc.c \
	srcs/push_swap/ps_atoi.c \
	srcs/push_swap/main.c \
	srcs/push_swap/command/rotate.c \
	srcs/push_swap/command/push.c \
	srcs/push_swap/command/reverse_rotate.c \
	srcs/push_swap/command/swap.c \
	srcs/push_swap/sort_any.c \
	srcs/push_swap/check_args.c

OBJS = $(SRCS:%.c=%.o)

# Libft+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
LIBDIR = ./srcs/push_swap/libft
LIBFT = $(LIBDIR)/libft.a

# Printf+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
PRINTFDIR	=	printf
PRINTF		=	$(PRINTFDIR)/libftprintf.a

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBDIR) all

$(PRINTF):
	$(MAKE) -C $(PRINTFDIR) all

clean:
	@ make -C $(PRINTFDIR) clean
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(OBJS)

fclean: clean
	@ make -C $(PRINTFDIR) clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
