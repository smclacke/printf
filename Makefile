# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: SarahLouise <SarahLouise@student.42.fr>      +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/05 11:01:41 by smclacke      #+#    #+#                  #
#    Updated: 2022/11/19 22:45:36 by smclacke      ########   odam.nl          #
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