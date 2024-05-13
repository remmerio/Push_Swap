/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:31:50 by mbellard          #+#    #+#             */
/*   Updated: 2024/05/09 18:32:01 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function calculate and decides which rotation combination is best to
// use to sort the stack. Of course, after rotation there is always one push
// operation is left to do which i embeded to code. Function is used during push
// from B to A.
int	ft_n_rotba(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = stack_b;
	i = ft_if_rrarrb_a(stack_a, stack_b, stack_b->num);
	while (tmp)
	{
		if (i > ft_if_rarb_a(stack_a, stack_b, tmp->num))
			i = ft_if_rarb_a(stack_a, stack_b, tmp->num);
		if (i > ft_if_rrarrb_a(stack_a, stack_b, tmp->num))
			i = ft_if_rrarrb_a(stack_a, stack_b, tmp->num);
		if (i > ft_if_rarrb_a(stack_a, stack_b, tmp->num))
			i = ft_if_rarrb_a(stack_a, stack_b, tmp->num);
		if (i > ft_if_rrarb_a(stack_a, stack_b, tmp->num))
			i = ft_if_rrarb_a(stack_a, stack_b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from A to B.
int	ft_n_rotab(t_stack *stack_a, t_stack *stack_b)
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
		if (i > ft_if_rarrb(stack_a, stack_b, tmp->num))
			i = ft_if_rarrb(stack_a, stack_b, tmp->num);
		if (i > ft_if_rrarb(stack_a, stack_b, tmp->num))
			i = ft_if_rrarb(stack_a, stack_b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
