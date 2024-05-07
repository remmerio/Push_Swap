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

int	ft_if_rarrb(t_stack *stack_a, t_stack *stack_b, long i)
{
	int	j;

	j = 0;
	if (ft_check_posix_b(stack_b, i))
		j = ft_lstlen(stack_b) - ft_check_posix_b(stack_b, i);
	j = ft_check_posix(stack_a, i) + j;
	return (j);
}
