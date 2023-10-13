# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/10/13 15:09:26 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# Libft+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
LIBDIR = ./srcs/libft
LIBFT = $(LIBDIR)/libft.a

# Printf+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#
PRINTFDIR	=	./printf
PRINTF		=	$(PRINTFDIR)/libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(LIBDIR) -I $(PRINTFDIR)
RM = rm -f

SRCS =	srcs/main.c \
	srcs/ps_atoi.c \
	srcs/ps_calloc.c \
	srcs/ps_split.c \
	srcs/sort_any.c \
	srcs/sort_five.c \
	srcs/sort_three.c \
	srcs/check_args.c \
	srcs/command/push.c \
	srcs/command/reverse_rotate.c \
	srcs/command/rotate.c \
	srcs/command/swap.c \
	srcs/coordinate_compression.c \
	srcs/create_node.c \
	srcs/ft_error.c

OBJS = $(SRCS:%.c=%.o)

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
	$(MAKE) fclean -C $(PRINTFDIR)
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(OBJS)

fclean: clean
	@ make -C $(PRINTFDIR) fclean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
