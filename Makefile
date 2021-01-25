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
