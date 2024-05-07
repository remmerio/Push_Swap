/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nummin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:42:22 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/26 15:42:25 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_nummin(t_stack *link)
{
	int	i;

	i = link->num;
	while (link)
	{
		if (link->num < i)
			i = link->num;
		link = link->next;
	}
	return (i);
}
