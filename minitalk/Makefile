# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: desteve <desteve@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 23:47:36 by desteve           #+#    #+#              #
#    Updated: 2023/01/22 16:39:15 by desteve          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
LIBFT_LIB = ./libft/libft.a
$(LIBFT_LIB):
	make -C ./libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM      = rm -f
SRCS =  server.c
SRCC =  client.c
OBJS = $(SRCS:c=o)
OBJC = $(SRCC:c=o)
$(NAME): $(OBJS) $(OBJC)
		$(CC) $(CFLAGS) $(OBJS) -o server $(LIBFT_LIB)
		$(CC) $(CFLAGS) $(OBJC) -o client $(LIBFT_LIB)
%.o : %.c
	${CC} ${CFLAGS} -c $^
all:    $(LIBFT_LIB) $(NAME)
clean:
		@$(RM) $(OBJS) $(OBJC)
fclean: clean
		$(RM) server client
		make fclean -C ./libft
re:	fclean all