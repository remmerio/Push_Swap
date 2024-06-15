/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_rrarrb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:25:35 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/21 20:25:37 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function calculates how many times we should rotate the stacks together.
// Because after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is 
// calculated by list_size - index_number.
size_t	ft_if_rrarrb(t_stack *stack_a, t_stack *stack_b, long n)
{
	size_t		i;

	i = 0;
	if (ft_check_posix_b(stack_b, n))
		i = ft_lstlen(stack_b) - ft_check_posix_b(stack_b, n);
	if (i < (ft_lstlen(stack_a) - ft_check_posix(stack_a, n))
		&& ft_check_posix(stack_a, n))
		i = ft_lstlen(stack_a) - ft_check_posix(stack_a, n);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
size_t	ft_if_rrarrb_a(t_stack *stack_a, t_stack *stack_b, long n)
{
	size_t	i;

	i = 0;
	if (ft_check_posix_a(stack_a, n))
		i = ft_lstlen(stack_a) - ft_check_posix_a(stack_a, n);
	if (i < (ft_lstlen(stack_b) - ft_check_posix(stack_b, n))
		&& ft_check_posix(stack_b, n))
		i = ft_lstlen(stack_b) - ft_check_posix(stack_b, n);
	return (i);
}
