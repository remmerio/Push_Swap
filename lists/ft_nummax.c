/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nummax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:15:37 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 16:15:41 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_nummax(t_stack *link)
{
	int	i;

	i = link->num;
	while (link)
	{
		if (link->num > i)
			i = link->num;
		link = link->next;
	}
	return (i);
}
