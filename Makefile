# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/09/19 19:06:54 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDES_DIR = ./Includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR) -I ./srcs/push_swap/libft -I ./srcs/push_swap
RM = rm -f

SRCS = srcs/push_swap/command/push.c \
	srcs/push_swap/command/rotate.c \
	srcs/push_swap/command/reverse_rotate.c \
	srcs/push_swap/command/swap.c \
	srcs/push_swap/libft/ft_lstadd_back.c \
	srcs/push_swap/libft/ft_lstadd_front.c \
	srcs/push_swap/libft/ft_lstclear.c \
	srcs/push_swap/libft/ft_lstdelone.c \
	srcs/push_swap/libft/ft_lstfree.c \
	srcs/push_swap/libft/ft_lstiter.c \
	srcs/push_swap/libft/ft_lstlast.c \
	srcs/push_swap/libft/ft_lstmap.c \
	srcs/push_swap/libft/ft_lstnew.c \
	srcs/push_swap/libft/ft_lstsize.c \
	srcs/push_swap/libft/ft_putstr_fd.c \
	srcs/push_swap/libft/ft_strlen.c \
	srcs/push_swap/list.c \
	srcs/push_swap/main.c \
	srcs/push_swap/ps_atoi.c \
	srcs/push_swap/sort.c \
	#srcs/push_swap/sort_three.c \
	srcs/push_swap/create_node.c \
	srcs/push_swap/coordinate_compression.c \

OBJS = $(SRCS:%.c=%.o)

LIBDIR = ./srcs/push_swap/libft
LIBFT = $(LIBDIR)/libft.a

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBDIR)

clean:
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

