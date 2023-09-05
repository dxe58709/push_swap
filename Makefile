# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/09/05 18:14:41 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/09/05 17:34:14 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDES_DIR = ./Includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR) -I ./command -I ./pushswap_libft
RM = rm -f

SRCS = command/list.c \
	command/main.c \
	command/push.c \
	command/reverse_rotate.c \
	command/rotate.c \
	command/swap.c \
	pushswap_libft/ft_lstadd_back.c \
	pushswap_libft/ft_lstadd_front.c \
	pushswap_libft/ft_lstclear.c \
	pushswap_libft/ft_lstdelone.c \
	pushswap_libft/ft_lstfree.c \
	pushswap_libft/ft_lstiter.c \
	pushswap_libft/ft_lstlast.c \
	pushswap_libft/ft_lstmap.c \
	pushswap_libft/ft_lstnew.c \
	pushswap_libft/ft_lstsize.c \
	pushswap_libft/ft_putstr_fd.c \
	pushswap_libft/ft_strlen.c \
	srcs/create_node.c 

OBJS = $(SRCS:%.c=%.o)

LIBDIR = ./pushswap_libft
LIBFT = $(LIBDIR)/pushswap_libft.a

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

