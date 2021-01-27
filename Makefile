# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rin <rin@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 12:45:02 by rin               #+#    #+#              #
#    Updated: 2021/01/26 12:45:03 by rin              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRC=./lib/ft*.c ./getter/*.c ./print/*.c ./main_printf/*.c

OBJS=ft*.o get*.o print*.o main*.o

INCLUDES=./

all:$(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus: re

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME) ft_printf.h.gch

re: fclean all
