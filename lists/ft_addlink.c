/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:58:50 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 17:58:53 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Aggiunge un nuovo anello con dentro un numero intero ed un puntatore al pross
// imo anello
t_stack	*ft_addlink(long n)
{
	t_stack	*link;

	link = malloc(sizeof(t_stack));
	if (!link)
		ft_error("Error");
	link->num = n;
	link->next = NULL;
	return (link);
}
