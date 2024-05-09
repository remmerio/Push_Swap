/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:53:29 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/23 17:53:31 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "push_swap.h"

// MOVES
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

// CASES
int		ft_if_rrarrb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarrb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarrb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rarrb_a(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarb(t_stack *stack_a, t_stack *stack_b, long n);
int		ft_if_rrarb_a(t_stack *stack_a, t_stack *stack_b, long n);

// APPLY
int		ft_use_rrarrb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rarb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rarrb(t_stack **stack_a, t_stack **stack_b, long n, char c);
int		ft_use_rarrb(t_stack **stack_a, t_stack **stack_b, long n, char c);

#endif
