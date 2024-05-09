/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:43:10 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:43:12 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// pa : This function takes the first element at the top of stack_b and put it
// at the top of stack_a. Do nothing if b is empty.
void	ft_push_a(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	if (i == 0)
		ft_putendl_fd("pa", 1);
}
