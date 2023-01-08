# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/24 15:48:25 by smclacke      #+#    #+#                  #
#    Updated: 2023/01/08 15:03:34 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c          \
	   ft_printf_utils.c    \
	   ft_strlen.c

OBJS = $(SRCS:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARCHIVE = ar rcs
RM = rm -rf

ALL = $(OBJS)

all: $(NAME)

$(NAME): $(ALL) $(HEADER)
	@ $(ARCHIVE) $(NAME) $?
	@ echo "Made!"

clean:
	@ $(RM) $(OBJS)
	@ echo "Clean!"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "fCleaned!"

re: fclean all

.PHONY: all clean make fclean re