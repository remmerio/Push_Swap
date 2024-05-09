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
static void	ft_sortbtilla3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_n_rotab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_if_rarb(*stack_a, stack_b, tmp->num))
				i = ft_use_rarb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rrarrb(*stack_a, stack_b, tmp->num))
				i = ft_use_rrarrb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rarrb(*stack, *stack_b, tmp->num))
				i = ft_use_rarrb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_if_rrarb(*stack_a, *stack_b, tmp->num))
				i = ft_use_rrarb(stack_a, stack_b, tmp->num, 'a');
			else
				tmp = tmp->next;
		}
	}
}

static t_stack	**ft_sorta(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_n_rotba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_if_rarb_a(*stack_a, *stack_b, tmp->num))
				i = ft_use_rarb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_if_rarrb_a(*stack_a, *stack_b, tmp->num))
				i = ft_use_rarrb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_if_rrarrb_a(*stack_a, *stack_b, tmp->num))
				i = ft_use_rrarrb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_if_rrarb_a(*stack_a, *stack_b, tmp->num))
				i = ft_use_rrarb(stack_a, stack_b, tmp->num, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

// This function sorts B passing one element at a time from A to B, when A 
// equals 3 it sorts A and returns a pointer to stack B.
static t_stack	*ft_sortb(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_push_b(stack_a, &stack_b, 0);
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_push_b(stack_a, &stack_b, 0);
	if (ft_lstlen(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_sortbtilla3(stack_a, &stack_b);
	if (!ft_issorted(*stack_a))
		ft_sort_three(*stack_a);
	return (stack_b);
}

// This function sorts the stack_a if there are more elements in the stack_a.
// And finally it makes final sort in stack_a afterall values pushed to stack_b,
// sorted and pushed back to stack_a. Because, even the stack_a is sorted at the
// end, the minimum number have to at the top of the stack_a. So, it simply
// brings the smallest number of the stack_a to the top.
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
		stack_a = ft_sorta(stack_a, &stack_b);
		i = ft_check_posix(*stack, ft_nummin(*stack_a));
		if (i < ft_lstlen*(*stack_a) - i)
		{
			while ((*stack_a)->num != ft_nummin((*stack_a))
				ft_rotate_a(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->num != ft_nummin(*stack_a))
				ft_rev_rotate_a(stack_a, 1);
		}
	}
}
