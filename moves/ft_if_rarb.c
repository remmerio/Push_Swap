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
int	ft_if_rarb(t_stack *stack_a, t_stack *stack_b, long i)
{
	int	j;

	j = ft_check_posix_b(stack_b, i);
	if (j < ft_check_posix(stack_a, i))
		j = ft_check_posix(stack_a, i);
	return (j);
}
