/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mtx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:37:23 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/02 18:37:25 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	ft_free_mtx(char **str)
{
	ssize_t	i;

	i = ft_mtxlen(str) - 1;
	while (i >= 0)
		free(str[i--]);
	free(str);
}
