NAME=fillit

CC=gcc

RM=rm -f

CFLAG = -Wall -Werror -Wextra

SRC =	dosfil/main.c \
		dosfil/check_error.c \
        dosfil/check_error_2.c \
        dosfil/ft_algo.c \
        dosfil/ft_algo_2.c \
        dosfil/wtf.c

OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ)
	make -C libft/
	$(CC) $(CFLAG) $(SRC) libft/libft.a -o $(NAME)

all: $(NAME)

clean:
	make clean -C libft/
	$(RM) $(OBJ)

fclean: clean
	make fclean -C libft/
	$(RM) $(NAME)

re: fclean all