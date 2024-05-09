/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addbacklink.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:40:56 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 18:40:58 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Attacca un anello alla fine della catena
void	ft_addbacklink(t_stack **link, t_stack *link_new)
{
	if (!link)
		return ;
	if (!*link)
		*link = link_new;
	else
		(ft_linklast(*link))->next = link_new;
}
