CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = check.c\
	  free.c\
	  get_value_utils.c\
	  push_command.c\
	  push_swap_utils.c\
	  push_swap.c\
	  push.c\
	  reverse_rotate_cmd.c\
	  rotate_command.c\
	  sorting.c\
	  swap_command.c\

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) -Llibft -lft -o $(NAME)

clean:
	@make -C ./libft clean
	@rm -rf $(OBJ)
	@echo "Objects Removed !"
	
fclean: clean
	@make -C ./libft fclean
	@rm -rf $(NAME)
	@echo "Binary Removed !"

re: fclean all
