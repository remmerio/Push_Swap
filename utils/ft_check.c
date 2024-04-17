/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:57:40 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/25 15:57:42 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../libft/libft.h"


void	ft_check(int argc, char *argv[])
{
	char	**mtx;
	int	i;

	if (argc == 2)
	{
		mtx = ft_split(argv[1], ' ');
		argc = ft_mtxlen(mtx);
		i = 0;
	}
	else
	{
		mtx = argv;
		i = 1;
	}
	ft_control_errors(argc, mtx, i);
	if (argc == 2)
		ft_free_mtx(mtx);
}

/*int	main(int argc, char *argv[])
{
	int		i = 1;
	int		num;
	char	**mtx;

	if (argc == 2)
	{
		mtx = ft_split(argv[1], ' ');
	}
	argc = ft_check(argc, argv);
	printf("*%d\n", argc);
	if (argc > 1)
	{
		while (i < argc)
		{
			num = ft_atoi(argv[i]);
			printf("Numero: %d\n", num);
			i++;
		}
	}
	return (0);
}*/
