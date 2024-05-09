/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:43:23 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:43:25 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// pb: take the first element at the top of stack_a and put it at the top of
// stack_b. Do nothing if a is empty.
void	ft_push_b(t_stack **stack_a, t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	if (i == 0)
		ft_putendl_fd("pb", 1);
}
