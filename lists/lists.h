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

void	*ft_addbacklink(t_stack **stack, t_stack *link_new);
t_stack	*ft_addlink(long n);
t_stack	*ft_(t_stack *link);
void	ft_freelst(t_stack **lst);
size_t	ft_lstlen(t_stack *link);
int		ft_find_index_b(t_stack *stack_b, int n_to_push);
int		ft_find_index_a(t_stack *stack_a, int n_to_push));

#endif
