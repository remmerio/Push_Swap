/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_rarb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:43:19 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 16:43:31 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function returns an integer equal to how many times the stacks rotate together.
int	ft_if_rarb(t_stack *stack_a, t_stack *stack_b, long n)
{
	int	i;

	i = ft_check_posix_b(stack_b, n);
	if (i < ft_check_posix(stack_a, n))
		i = ft_check_posix(stack_a, n);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int	ft_if_rarb_a(t_stack *stack_a, t_stack *stack_b, long n)
{
	int	i;

	i = ft_check_posix_a(stack_a, n);
	if (i < ft_check_posix(stack_b, n))
		i = ft_check_posix(stack_b, n);
	return (i);
}
