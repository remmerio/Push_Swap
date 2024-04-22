/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:49:11 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 20:49:15 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_freelink(t_stack **link)
{
	t_stack	*tmp;

	if (!link)
		return ;
	while (*link)
	{
		tmp = (*link)->next;
		(*link)->n = 0;
		free(*link);
		*link = tmp;
	}
}
