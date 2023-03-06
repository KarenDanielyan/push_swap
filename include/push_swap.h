/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:55:37 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/06 14:28:52 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"

/* Pretty Printing */
/* NOTE: I don't think I will implement this. */
# ifndef PRETTY_PRINT
#  define PRETTY_PRINT 0
# endif

/* Input Handler */
int		parse(int ac, char **av, t_stack **head_a);
void	to_index(t_stack **head_a);

/* push_swap instructions */
void	swap_a(t_stack	**head);
void	swap_b(t_stack	**head);
void	rotate_a(t_stack **head);
void	rotate_b(t_stack **head);
void	rrotate_a(t_stack **head);
void	rrotate_b(t_stack **head);
void	swap_s(t_stack	**head_a, t_stack **head_b);
void	push_a(t_stack	**head_a, t_stack **head_b);
void	push_b(t_stack	**head_a, t_stack **head_b);
void	rotate_r(t_stack **head_a, t_stack **head_b);
void	rrotate_r(t_stack **head_a, t_stack **head_b);

/*	Helper functions */
void	quick_sort(int	*index, int l, int r);

#endif