/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:53:29 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/23 17:53:31 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../libft/libft.h"

// STACK
/*typedef struct node
{
	int				data;
	struct node		*next;
}		t_stack;*/

// MOVES
int		ft_swap_a(t_stack **swap_a);
int		ft_swap_b(t_stack **swap_b);
int		ft_swap_ab(t_stack **swap_a, t_stack **swap_b);
int		ft_push_a(t_stack **push_a, t_stack **push_b);
int		ft_push_b(t_stack **push_b, t_stack **push_a);
int		ft_rotate_a(t_stack **up_a);
int		ft_rotate_b(t_stack **up_b);
int		ft_rotate_ab(t_stack **up_a, t_stack **up_b);
int		ft_rev_rotate_a(t_stack **down_a);
int		ft_rev_rotate_b(t_stack **down_b);
int		ft_rev_rotate_ab(t_stack **down_a, t_stack **down_b);

#endif
