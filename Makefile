NAME		= push_swap

CC		= cc

CFLAGS		= -Wall -Wextra -Werror

LIBFT_PATH	= libft/

LIST_PATH	= lists/

MOVES_PATH	= moves/

UTILS_PATH	= utils/


INCLUDE_PATH 	= includes/

SRC_1 		= main.c

SRC_2 		= $(addprefix $(LIST_PATH), ft_addbacklink.c ft_addlink.c \
		  ft_freelink.c ft_linklast.c ft_lstlen.c ft_nummax.c ft_nummin.c)
			
SRC_3		= $(addprefix $(MOVES_PATH), ft_if_rarb.c ft_if_rarrb.c ft_if_rrarb.c \
		  ft_if_rrarrb.c ft_push_a.c ft_push_b.c ft_rev_rotate_ab.c ft_swap_ab.c \
		  ft_use_rarb.c ft_use_rarrb.c ft_use_rrarb.c ft_use_rrarrb.c ft_rotate_ab.c)
			
SRC_4		= $(addprefix $(UTILS_PATH), ft_check.c ft_check_posix.c ft_control_errors.c \
		  ft_error.c ft_fill_stack.c ft_free_mtx.c ft_issorted.c \
		  ft_n_rot.c ft_sort.c ft_sort_three.c)

OBJS 		= $(SRC_1:.c=.o) $(SRC_2:.c=.o) $(SRC_3:.c=.o) $(SRC_4:.c=.o)

INCLUDE 	= -L ./libft -lft

.c.o:
		${CC} -c $< -o ${<:.c=.o} -I$(INCLUDE_PATH) -I$(LIST_PATH) -I$(MOVES_PATH) -I$(UTILS_PATH)


$(NAME):	$(OBJS)
		make -C $(LIBFT_PATH)
		$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) -o $(NAME) 
		
all: 		$(NAME)
		
re :		fclean all

clean:
		rm -f $(OBJS) $(NAME)
		make -C $(LIBFT_PATH) clean
			
fclean: 	clean
		rm -f $(NAME)
		make -C $(LIBFT_PATH) fclean

.PHONY:	all clean fclean re
