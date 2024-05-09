/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:48:02 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:48:04 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rrb: This function shift down all elements of stack_b by 1. The last element
// becomes the first one.
void	ft_rev_rotate_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;
	int		j;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	j = 0;
	tmp = *stack_b;
	while ((*stack_b)->next)
	{
		j++;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->next = tmp;
	while (j > 1)
	{
		tmp = tmp->next;
		j--;
	}
	tmp->next = NULL;
	if (i == 2)
		ft_putendl_fd("rrb", 1);
	return ;	
}

// rra: This function shift down all elements of stack_a by 1. The last element
// becomes the first one.
void	ft_rev_rotate_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;
	int		j;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	j = 0;
	tmp = *stack_a;
	while ((*stack_a)->next)
	{
		j++;
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = tmp;
	while (j > 1)
	{
		tmp = tmp->next;
		j--;
	}
	tmp->next = NULL;
	if (i == 1)
		ft_putendl_fd("rra", 1);
}
// rrr: rra and rrb at the same time.
void	ft_rev_rotate_ab(t_stack **stack_a, t_stack **stack_b, int i)
{
	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	ft_rev_rotate_a(stack_a, i);
	ft_rev_rotate_b(stack_b, i);
	if (i == 0)
		ft_putendl_fd("rrr", 1);
}
