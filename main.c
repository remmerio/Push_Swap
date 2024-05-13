/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:14:42 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/23 18:14:44 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	ft_check(argc, argv);
	stack_a = ft_fill_stack(argc, argv);
	if (!ft_issorted(stack_a))
		ft_sort(&stack_a);
	ft_freelink(&stack_a);
	return (0);
}
