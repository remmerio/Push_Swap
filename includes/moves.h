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
int		ft_swap_a(t_stack **stack_a, int i);
int		ft_swap_b(t_stack **swap_b);
int		ft_swap_ab(t_stack **swap_a, t_stack **swap_b);
int		ft_push_a(t_stack **push_a, t_stack **push_b);
int		ft_push_b(t_stack **stack_a, t_stack **t_stack_b, int i);
int		ft_rotate_a(t_stack **up_a);
int		ft_rotate_b(t_stack **up_b);
int		ft_rotate_ab(t_stack **up_a, t_stack **up_b);
int		ft_rev_rotate_a(t_stack **down_a);
int		ft_rev_rotate_b(t_stack **down_b);
int		ft_rev_rotate_ab(t_stack **down_a, t_stack **down_b);

// CHECKS
int		ft_rot_ab_push_b(t_stack *stack_a, t_stack *stack_b);

// CASES
int		ft_if_rrarrb(t_stack *stack_a, t_stack *stack_b, long i);
int		ft_if_rarb(t_stack *stack_a, t_stack *stack_b, long i);
int		ft_if_rarrb(t_stack *stack_a, t_stack *stack_b, long i);
int		ft_if_rrarb(t_stack *stack_a, t_stack *stack_b, long i);

#endif
