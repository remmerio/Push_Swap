/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_rarrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:43:19 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 16:43:31 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_if_rarrb(t_stack *stack_a, t_stack *stack_b, long n)
{
	size_t	i;

	i = 0;
	if (ft_check_posix_b(stack_b, n))
		i = ft_lstlen(stack_b) - ft_check_posix_b(stack_b, n);
	i = ft_check_posix(stack_a, n) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
size_t	ft_if_rarrb_a(t_stack *stack_a, t_stack *stack_b, long n)
{
	size_t	i;

	i = 0;
	if (ft_check_posix(stack_b, n))
		i = ft_lstlen(stack_b) - ft_check_posix(stack_b, n);
	i = ft_check_posix_a(stack_a, n) + i;
	return (i);
}
