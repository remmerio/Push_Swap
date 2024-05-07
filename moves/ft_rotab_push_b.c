/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotab_push_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:06:58 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/21 20:07:00 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function decides which rotation combination is best to use to sort the
// stack before the push to B is done.
int	ft_rotab_push_b(t_stack *stack_a, t_stack stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = stack_a;
	i = ft_if_rrarrb(stack_a, stack_b, stack_a->num);
	while (tmp)
	{
		if (i > ft_if_rarb(stack_a, stack_b, tmp->num))
			i = ft_if_rarb(stack_a, stack_b, tmp->num);
		if (i > ft_if_rrarrb(stack_a, stack_b, tmp->num))
			i = ft_if_rrarrb(stack_a, stack_b, tmp->num);
		if (i > ft_if_rarrb(stack_a, stack_b, tmp->nu))
			i = ft_if_rarrb(stack_a, stack_b, tmp->num);
		if (i > ft_if_rrarb(stack_a, stack_b, tmp->nu))
			i = ft_if_rrarb(stack_a, stack_b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
