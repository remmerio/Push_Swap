/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:42:49 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 12:42:51 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	ft_fill_stack(int argc, char *argv[])
{
	t_stack		*stack_a;
	char		**mtx;
	int			i;
	long			j;

	stack_a = NULL;
	i = 0;
	if (argc == 2)
	{
		mtx = ft_split(argc[1], ' ');
		argc = ft_mtxlen(mtx);
	}
	else
	{
		mtx = argv;
		i = 1;
	}
	j = 0;
	while (i < argc)
	{
		j = ft_atol(mtx[i]);
		ft_addbacklink(&stack_a, ft_addlink(j));
		i++;
	}
	ft_free_mtx(mtx);
	return (stack_a);
}