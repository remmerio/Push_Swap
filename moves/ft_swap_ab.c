/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:41:57 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:41:59 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sa: This function swaps the first 2 elements at the top of stack a. Do nothing
// if there is only one or no elements.
void	ft_swap_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (i == 1)
		ft_putendl_fd("sa", 1);
}

// sb: This function swaps the first 2 elements at the top of stack b. Do nothing
// if there is only one or no elements.
void	ft_swap_a(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (i == 2)
		ft_putendl_fd("sb", 1);
}

// sa and sb in the same time

void	ft_swap_ab(t_stack **stack_a, t_stack **stack_b int i)
{
	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	ft_swap_a(stack_a, i);
	ft_swap_b(stack_b, i);	
	if (i == 0)
		ft_putendl_fd("ss", 1);
}
