/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_limits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:17:06 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/15 13:17:08 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi_limits(const char *nptr)
{
	int	i;
	long	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			sign = 1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10 + nptr[i] - 48;
		if (num > 2147483647)
			return (2147483648);
		i++;
	}
	if (sign > 0)
		num = -num;
	return (num);
}

/*int	main(int argc, char **argv)
{
	long	m;
	 
	m = ft_atol(argv[1]);
	printf("%ld\n", m);
	return (argc);
}*/
