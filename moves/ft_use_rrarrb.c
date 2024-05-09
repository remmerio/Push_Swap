/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use_rrarrb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:32:50 by mbellard          #+#    #+#             */
/*   Updated: 2024/05/09 21:32:52 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_use_rrarrb(t_stack **stack_a, t_stack **stack_b, long n, char c)
{
	if (c == 'a')
	{
		while ((*stack_a)->num != n && ft_check_posix_b(*stack_b, n) > 0)
			ft_rev_rotate_ab(stack_a, stack_b, 0);
		while ((*stack_a)->num != n)
			ft_rev_rotate_a(stack_a, 1);
		while (ft_check_posix_b(*stack_b, n) > 0)
			ft_rev_rotate_b(stack_b, 2);
		ft_push_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->num != n && ft_check_posix_a(*stack_a, n) > 0)
			ft_rev_rotate_ab(stack_a, stack_b, 0);
		while ((*stack_b)->num != n)
			ft_rev_rotate_b(stack_b, 2);
		while (ft_check_posix_a(*stack_a, n) > 0)
			ft_rev_rotate_ab(stack_a, 1);
		ft_push_a(stack_a, stack_b, 0);
	}
	return (-1);
}
