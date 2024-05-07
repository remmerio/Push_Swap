/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:32:50 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 21:32:52 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function sort and push stacks until 3 members left behind.
void	ft_sortbtilla3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotab_push_b(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_if_rarb(*stack_a, stack_b, tmp->num))
			i = ft_APPLY_RARB(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rrarrb(*stack_a, stack_b, tmp->num))
			i = ft_APPLY_RRARRB(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rarrb(*stack, *stack_b, tmp->num))
			i = ft_APPLY_RARRB(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rrarb(*stack_a, *stack_b, tmp->num))
			i = ft_APPLY_RRARB(stack_a, stack_b, tmp->num, 'a');
			else
				tmp = tmp->next;
		}
	}
}

// This function sorts B passing one element at a time from A to B, when A 
// equals 3 it sorts A and returns a pointer to stack B.
t_stack	*ft_sortb(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_push_b(stack_a, &stack_b, 0);
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_push_b(stack_a, &stack_b, 0);
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_sortbtilla3();
	if (ft_lstlen(*stack_a))
	return (stack_b)
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstlen(*stack_a) == 2)
		ft_swap_a(stack_a, 0);
	else
	{
		stack_b = ft_sortb(stack_a);
		stack_a = 
	}
}
