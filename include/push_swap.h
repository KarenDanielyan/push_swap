/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:55:37 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/20 14:57:39 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"

/* Pretty Printing */
# ifndef PRETTY_PRINT
#  define PRETTY_PRINT 0
# endif

/* Input Handler */
int		parse(int ac, char **av, t_stack **head_a);

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

#endif