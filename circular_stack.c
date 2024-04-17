/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:49:30 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/23 19:49:33 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	circular_stack(struct node *head)
{
	struct node	*current;

	current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = head;
}

// this function make circular my linked list
