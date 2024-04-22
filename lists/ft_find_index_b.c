/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:57:25 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/21 20:57:27 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_find_index(t_stack *link, int i)
{
	int	j;

	j = 0;
	while (link->n != i)
	{
		j++;
		stack_a = stack_a->next;
	}
	stack_a->posix = 0;
	return (j);
}

int	ft_find_index_b(t_stack *stack_b, int n_to_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (n_to_push > stack_b->num && n_to_push < ft_lstlen(stack_b)->num)
		i = 0;
	else if (n_to_push > ft_MAX(stack_b) || n_to_push < ft_MIN(stack_b))
		i = ft_find_index(stack_b, ft_MAX(stack_b));
}
