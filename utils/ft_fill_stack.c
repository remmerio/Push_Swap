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

static t_stack	*ft_put_n_stack(int i, int argc, char **mtx, t_stack stack_a)
{
	long	n;
	t_stack	*stack_a;

	n = 0;
	while (i < argc)
	{
		n = ft_atol(mtx[i]);
		ft_addbacklink(&stack_a, ft_addlink(n));
		i++;
	}
	return (stack_a);
}

t_stack	*ft_fill_stack(int argc, char *argv[])
{
	t_stack	*stack_a;
	char	**mtx;
	int		i;

	stack_a = NULL;
	i = 0;
	if (argc == 2)
	{
		mtx = ft_split(argv[1], ' ');
		argc = ft_mtxlen(mtx);
	}
	else
	{
		mtx = argv;
		i = 1;
	}
	stack_a = ft_put_n_stack(i, argc, mtx, stack_a);
	ft_free_mtx(mtx);
	return (stack_a);
}
