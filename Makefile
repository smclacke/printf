# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: smclacke <smclacke@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/24 15:48:25 by smclacke      #+#    #+#                  #
#    Updated: 2022/11/24 15:48:26 by smclacke      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c          \
	   ft_printf_utils.c    \
	   ft_strlen.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ft_printf.h
ALL = $(OBJS)

all: $(NAME)
$(NAME): $(ALL) $(INCLUDES)
	@ar rcs $(NAME) $?
	@echo "compile!!"
clean:
	@rm -rf *.o
fclean: clean
	@rm -f $(NAME)
	@echo "it's clean!"
re: fclean all
	@echo "do it all again"

.PHONY: all clean make fclean re