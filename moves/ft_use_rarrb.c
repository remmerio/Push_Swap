/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use_rarrb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 02:29:10 by mbellard          #+#    #+#             */
/*   Updated: 2024/05/09 02:29:12 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function rotates the stack_b in reverse direction, the stack_a in 
// oppsite direction of stack_b as required amount.
int	ft_use_rarrb(t_stack **stack_a, t_stack **stack_b, long n, char c)
{
	if (c == 'a')
	{
		while ((*stack_a)->num != n)
			ft_rotate_a(stack_a, 1);
		while (ft_check_posix_b(*stack_b, n) > 0)
			ft_rev_rotate_b(stack_b, 2);
		ft_push_b(stack_a, stack_b, 0);
	}
	else
	{
		while (ft_check_posix_a(*stack_a, n) > 0)
			ft_rotate_a(stack_a, 1);
		while ((*stack_b)->num != n)
			ft_rev_rotate_b(stack_b, 2);
		ft_push_a(stack_a, stack_b, 0);
	}
	return (-1);
}
