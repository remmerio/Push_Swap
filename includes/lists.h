/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:23:09 by mbellard          #+#    #+#             */
/*   Updated: 2024/04/19 16:23:11 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

# include "push_swap.h"

void	ft_addbacklink(t_stack **stack, t_stack *link_new);
t_stack	*ft_addlink(long n);
t_stack	*ft_linklast(t_stack *link);
void	ft_freelink(t_stack **link);
size_t	ft_lstlen(t_stack *link);
int		ft_check_posix(t_stack *link, long n);
int		ft_nummin(t_stack *link);
int		ft_nummax(t_stack *link);

#endif
