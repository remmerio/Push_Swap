/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_posix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:06:21 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 15:06:23 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../includes/push_swap.h"
 
int	ft_check_posix(t_stack *link, long i)
{
	int	j;

	j = 0;
	while (link->num != i)
	{
		j++;
		link = link->next;
	}
	link->posix = 0;
	return (j);
}

int	ft_check_posix_b(t_stack *stack_b, long i)
{
	int		j;
	t_stack	*tmp;

	j = 1;
	if (i > stack_b->num && i < ft_linklast(stack_b)->num)
		j = 0;
	else if (i > ft_nummax(stack_b) || i < ft_nummin(stack_b))
		j = ft_check_posix(stack_b, ft_nummax(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->num < i || tmp->num > i)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			j++;
		}
	}
	return (j);
}

int	ft_check_posix_a(t_stack *stack_a, long i)
{
	int		j;
	t_stack	*tmp;

	j = 1;
	if (i < stack_a->num && i > ft_linklast(stack_a)->num)
		j = 0;
	else if (i > ft_nummax(stack_a) || i < ft_nummin(stack_a))
		j = ft_check_index(stack_a, ft_nummin(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->num > i || tmp->num < i)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			j++;
		}
	}
	return(j);
}
