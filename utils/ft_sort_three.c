/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 03:15:35 by mbellard          #+#    #+#             */
/*   Updated: 2024/05/09 03:15:52 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function sort the stack if there are only 
// three elements in the stack.
void	ft_sort_three(t_stack **stack_a)
{
	if (ft_nummin(*stack_a) == (*stack_a)->num)
	{
		ft_rev_rotate_a(stack_a, 1);
		ft_swap_a(stack_a, 1);
	}
	else if (ft_nummax(*stack_a) == (*stack_a)->num)
	{
		ft_rotate_a(stack_a, 1);
		if (!ft_issorted(*stack_a))
			ft_swap_a(stack_a, 1);
	}
	else
	{
		if (ft_check_posix(*stack_a, ft_nummax(*stack_a)) == 1)
			ft_rev_rotate_ra(stack_a, 1);
		else
			ft_swap_a(stack_a, 1);
	}
}
