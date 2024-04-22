/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbellard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:02:53 by mbellard          #+#    #+#             */
/*   Updated: 2024/03/22 19:02:56 by mbellard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// STACK
typedef struct node
{
	long	num;
	long	posix;
	struct node	*next;
	struct node	*prev;
}	t_stack;

# include "../libft/libft.h"
# include "utils.h"
# include "lists.h"
# include "moves.h"

// MAIN
int	main(int argc, char *argv[]);

#endif
