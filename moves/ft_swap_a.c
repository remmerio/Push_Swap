/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:40:34 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:40:37 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
void	ft_swap_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (i == 0)
		ft_putendl_fd("sa", 1);
}
