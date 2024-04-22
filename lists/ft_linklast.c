/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linklast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:24:57 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 20:24:59 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Ritorna l'ultimo elemento della stack
t_stack	*ft_linklast(t_stack *link);
{
	if (!link)
		return (NULL);
	while (link->netx)
		link = link->next;
	return (link);
}
