NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = ft_atoi.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putnbr_fd.c

SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ) $(BONUS_OBJ)
	ar -r $(NAME) $(SRC_OBJ) $(BONUS_OBJ)

$(SRC_OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re