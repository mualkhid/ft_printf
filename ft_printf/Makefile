# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 16:31:05 by mualkhid          #+#    #+#              #
#    Updated: 2023/12/23 17:00:36 by mualkhid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS := ft_printf.c \
		ft_putchar.c \
		ft_putint.c \
		ft_puthexa.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putuint.c \

HEADERS := ft_printf.h

OBJS := $(SRCS:.c=.o)
NAME := libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)


