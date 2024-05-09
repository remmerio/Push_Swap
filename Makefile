PS_NAME		= 	push_swap

SRC_1		=	main.c

SRC_2		=	./lists/ft_addbacklink.c lists/ft_addlink.c lists/ft_check_posix.c \
			lists/freelink.c lists/linklast.c lists/listlen.c ft_nummax.c \
			ft_nummin.c

SRC_3		=	moves/ft_if_rarb.c moves/ft_if_rarrb.c moves/ft_if_rrarb.c \
			moves/ft_push_a.c moves/ft_push_b.c moves/ft_rev_rotate_ab.c \
			moves/ft_swap_ab.c moves/ft_use_rarb.c moves/ft_use_rarrb.c \
			moves/ft_use_rrarb.c moves/ft_use_rrarrb.c

SRC_4		=	utils/ft_check.c utils/ft_check_posix.c utils/ft_control_errors.c \
			utils/ft_error.c utils/ft_fill_stack.c utils/ft_free_mtx.c \
			utils/ft_issorted.c utils/ft_n_rot.c utils/ft_sort.c \
			utils/ft_sort_three.c

OBJS_1		=	${SRC_1:.c=.o}

OBJS_2		=	${SRC_2:.c=.o}

OBJS_3		=	${SRC_3:.c=.o}

OBJS_4		=	${SRC_4:.c=.o}

INCLUDE		=	-L ./libft -lft

CC		=	cc

CFLAGS		=	-Wall -Werror -Wextra

NAME		=	$(PS_NAME)

all: $(NAME) libft/libft.a

$(NAME): $(OBJS_1) $(OBJS_2) $(OBJS_3) $(OBJS_4)
	$(CC) $(CFLAGS) $(OBJS_1) $(OBJS_2) $(OBJS_3) $(OBJS_4) -o $(NAME)

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
