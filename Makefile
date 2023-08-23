# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:10:44 by nsakanou          #+#    #+#              #
#    Updated: 2023/08/23 18:43:07 by nsakanou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDES_DIR = ./Includes

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR)
RM = rm -f

SRCS = 

OBJS = $(SRCS:%.c=%.o)

LIBDIR = ./pushswap_libft
LIBFT = $(LIBDIR) /pushswap_libft.a

all: $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT) :
	$(MAKE) -C $(LIBDIR)

clean:
	$(MAKE) fclean -C $(LIBDIR)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
