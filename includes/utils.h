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

# include "push_swap.h"

// ARGUMENT CHECKS
void	ft_check(int argc, char *argv[]);
void	ft_control_errors(int argc, char *mtx[], int i);
void	ft_error(char	*str);
void	ft_free_mtx(char *str[]);

// SORTING CHECKS
t_stack	ft_fill_stack(int argc, char *argv[]);
int		ft_issorted(t_stack *stack_a);
void	ft_sort(t_stack **stack_a);

#endif
