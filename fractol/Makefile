NAME	=	fractol
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g3 -Ofast -w
RM		=	rm	-rf

SRCS 	=	fractol.c mandelbrot.c julia.c render.c utils.c events.c tricorn.c

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME): $(SRCS)
	$(MAKE) all -C mlx
	$(CC) $(CFLAGS) $(SRCS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	@echo "Compilation finished: ./$(NAME) [1, 2, -0.7269 0.1889]"

clean:
	$(MAKE) clean -C mlx

fclean: clean
	$(RM) $(NAME)
	$(MAKE) clean -C mlx

re: fclean $(NAME)

.PHONY = all clean fclean re