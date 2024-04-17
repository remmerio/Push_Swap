/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:46:33 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/23 19:46:35 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/libft.h"

// STACK
/*typedef struct node
{
	int				data;
	struct node		*next;
}		t_stack;*/

// CIRCULAR LISTS
// void	make_circular(struct node *head);
// CHECKS
void	ft_check(int argc, char *argv[]);
void	ft_control_errors(int argc, char *mtx[], int i);
void	ft_error(char	*str);
void	ft_free_mtx(char *str[]);

#endif
