PS_NAME	= 	push_swap

SRCS		= 	main.c	moves/*.c utils/*.c lists/*c

OBJS		=	$(SRCS:.c=.o)

INCLUDE	=	./includes

CC		=	cc

CFLAGS		=	-Wall -Werror -Wextra

NAME		=	$(PS_NAME)

all: $(NAME) libft/libft.a

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

libft/libft.a:
	make -s -C libft
	
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE)

clean:
	rm -f $(OBJS)
	make -s -C libft clean
	
fclean: clean
	rm -f $(PS_NAME)
	make -s -C libft fclean

re: fclean all

.PHONY: all clean fclean re
