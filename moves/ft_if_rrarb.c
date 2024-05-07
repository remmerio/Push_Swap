/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_rrarb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:12:59 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 17:13:04 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function returns an integer equal to how many times the stacks rotate together.
int	ft_if_rrarb(t_stack *stack_a, t_stack *stack_b, long i)
{
	int	j;

	j = 0;
	if (ft_check_posix(stack_a, i))
		j =ft_lstlen(stacc_a) - ft_check_posix(stack_a, i);
	j = ft_check_posix(stack_b, i) + j;
	return (j);
}
