# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/09/07 18:59:48 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDES_DIR = ./Includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR) -I ./command -I ./libft
RM = rm -f

SRCS = command/list.c \
	command/push.c \
	command/reverse_rotate.c \
	command/rotate.c \
	command/swap.c \
	command/main.c \
	libft/ft_lstadd_back.c \
	libft/ft_lstadd_front.c \
	libft/ft_lstclear.c \
	libft/ft_lstdelone.c \
	libft/ft_lstfree.c \
	libft/ft_lstiter.c \
	libft/ft_lstlast.c \
	libft/ft_lstmap.c \
	libft/ft_lstnew.c \
	libft/ft_lstsize.c \
	libft/ft_putstr_fd.c \
	libft/ft_strlen.c

OBJS = $(SRCS:%.c=%.o)

LIBDIR = ./libft
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

