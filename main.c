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
	t_stack	*stack_b;

	if (argc < 2)
	{
		ft_putstr_fd("\n\tError: Invalid_Arguments\n\n", 2);
		return (-1);
	}
	ft_check(argc, argv);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	stack_a = ft_fill_stack(argc, argv);
	stack_b = NULL;
	// qui devo inizializzare le stack
	free(stack_a);
	free(stack_b);
	return (0);
}
