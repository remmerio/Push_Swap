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

// This function checks the index of a number in the stack.
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

// This function checks what index number i will get after it is being pushed
// to the stack_b. It returns an integer equal to the correct place in the 
// stack.
int	ft_check_posix_b(t_stack *stack_b, long n)
{
	int		j;
	t_stack	*tmp;

	j = 1;
	if (n > stack_b->num && n < ft_linklast(stack_b)->num)
		j = 0;
	else if (n > ft_nummax(stack_b) || n < ft_nummin(stack_b))
		j = ft_check_posix(stack_b, ft_nummax(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->num < n || tmp->num > n)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			j++;
		}
	}
	return (j);
}

// This function checks what index number i will get after it is being pushed
// to the stack_a. It returns an integer equal to the correct place in the 
// stack.
int	ft_check_posix_a(t_stack *stack_a, long n)
{
	int		j;
	t_stack	*tmp;

	j = 1;
	if (n < stack_a->num && n > ft_linklast(stack_a)->num)
		j = 0;
	else if (n > ft_nummax(stack_a) || n < ft_nummin(stack_a))
		j = ft_check_posix(stack_a, ft_nummin(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->num > n || tmp->num < n)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			j++;
		}
	}
	return(j);
}
