/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use_rarb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:45:51 by mbellard          #+#    #+#             */
/*   Updated: 2024/05/08 20:45:54 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function rotates both stack_a and stack_b in the same direction as 
// required amount.

int	ft_use_rarb(t_stack **stack_a, t_stack stack_b**, long n, char c)
{
	if (c == 'a')
	{
		while ((*stack_a)->num != n && ft_check_posix_b(*stack_b, n) > 0)
			ft_rotate_ab(stack_a, stack_b, 0);
		while ((*stack_a)->num != n)
			ft_rotate_a(stack_a, 1);
		while (ft_check_posix_b(*stack_b, n) > 0)
			ft_rotate_b(stack_b, 2);
		ft_push_b(stack_a, stack_b, 0);
	}
	else
	{
		while ((*stack_b)->num != n && ft_check_posix_a(*stack_a, n) > 0)
			ft_rotate_ab(a, b, 0);
		while ((*stack_b)->num != n)
			ft_rotate_b(stack_b, 2);
		while (ft_check_posix_a(*stack_a, n) > 0)
			ft_rotate_a(a, 1);
		ft_push_a(stack_a, stack_b, 0);
	}
	return (-1);
}
