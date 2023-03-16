NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = ft_isdigit.c\
	ft_strlen.c\
	ft_strjoin.c\
	ft_split.c\
	ft_strcmp.c\
	ft_substr.c\
	ft_strlcpy.c\
	ft_strdup.c\

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

.PHONY: all clean fclean bonus re