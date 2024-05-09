/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:46:33 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/16 16:46:34 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "../includes/push_swap."

// rb: This function shift up all elements of stack_b by 1. The first element
// becomes the last one.
void	ft_rotate_a(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = ft_linklast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (i == 2)
		ft_putendl_fd("rb", 1);
}

// ra: This function shift up all elements of stack_a by 1. The first element
// becomes the last one.
void	ft_rotate_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = ft_linklast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	if (i == 1)
		ft_putendl_fd("ra", 1);
}

// rr: This function rotates stack_a and stack_b in the same time
void	ft_rotate_ab(t_stack **stack_a, t_stack **stack_b, int i)
{
	if (!stack_a || !((*stack_a)->next) || !stack_b || !((*stack_b)->next))
		return ;
	ft_rotate_a(t_stack stack_a, i);
	ft_rotate_b(t_stack stack_b, i);
	if (i == 0)
		ft_putendl_fd("rr", 1);
}
