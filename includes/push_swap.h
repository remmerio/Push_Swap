/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:02:53 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/22 19:02:56 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* --- STACK --- */
typedef struct node
{
	long	num;
	long	posix;
	struct	node	*next;
	struct	node	*prev;
}	t_stack;

/* --- MAIN --- */
int		main(int argc, char *argv[]);

/* --- LIST TOOLS --- */
void	ft_addbacklink(t_stack **stack, t_stack *link_new);
t_stack	*ft_addlink(long n);
t_stack	*ft_linklast(t_stack *link);
void	ft_freelink(t_stack **link);
size_t	ft_lstlen(t_stack *link);
int		ft_nummin(t_stack *link);
int		ft_nummax(t_stack *link);

/* --- MOVE FUNCTIONS --- */
void	ft_swap_a(t_stack **stack_a, int i);
void	ft_swap_b(t_stack **stack_b, int i);
void	ft_swap_ab(t_stack **stack_a, t_stack **stack_b, int i);
void	ft_push_a(t_stack **a, t_stack **b, int i);
void	ft_push_b(t_stack **stack_a, t_stack **t_stack_b, int i);
void	ft_rotate_a(t_stack **stack_a, int i);
void	ft_rotate_b(t_stack **stack_b, int i);
void	ft_rotate_ab(t_stack **stack_a, t_stack **stack_b, int i);
void	ft_rev_rotate_a(t_stack **stack_a, int i);
void	ft_rev_rotate_b(t_stack **stack_a, int i);
void	ft_rev_rotate_ab(t_stack **stack_a, t_stack **stack_b, int i);

/* --- CASE FUNCTIONS --- */
int		ft_if_rrarrb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarrb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarrb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarrb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarb_a(t_stack *stack_a, t_stack *stack_b, long n);

/* --- APPLY FUNCTIONS --- */
int		ft_use_rrarrb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rarb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rarrb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rrarb(t_stack **stack_a, t_stack **stack_b, long n, char c);

/* --- ARGUMENT CHECKS --- */
void	ft_check(int argc, char *argv[]);
void	ft_control_errors(int argc, char *mtx[], int i);
void	ft_error(char	*str);
void	ft_free_mtx(char *str[]);

/* --- SORTING CHECKS --- */
t_stack	*ft_fill_stack(int argc, char *argv[]);
int		ft_issorted(t_stack *stack_a);
void	ft_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);

/* --- POSITION CHECKS --- */
int		ft_check_posix(t_stack *link, long i);
int		ft_check_posix_a(t_stack *stack_a, long i);
int		ft_check_posix_b(t_stack *stack_b, long i);

/* --- COUNT ROTATION CHECKS --- */
int		ft_n_rotba(t_stack *stack_a, t_stack *stack_b);
int		ft_n_rotab(t_stack *stack_a, t_stack *stack_b);

#endif
