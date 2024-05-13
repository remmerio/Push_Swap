/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_errors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:46:31 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/12 16:46:33 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

static int	ft_duplicates_arg(char *mtx[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (mtx[i])
	{
		k = 0;
		if (mtx[i][k] == '+')
			k++;
		j = 1;
		while (mtx[j])
		{
			if (mtx[i] == mtx[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_correct_arg(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_control_errors(int argc, char *mtx[], int i)
{
	long int	tmp;

	while (i < argc)
	{
		if (!ft_correct_arg(mtx[i]))
			ft_error("Error: NO DIGIT CHAR DETECTED");
		tmp = ft_atoi_limits(mtx[i]);
		if (tmp == 2147483648)
			ft_error("Error: NO INT VALUE");
		i++;
	}
	if (ft_duplicates_arg(mtx) != 0)
		ft_error("Error: DUPLICATE VALUE DETECTED");
}
