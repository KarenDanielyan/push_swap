/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:29:53 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/04 17:01:40 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stack.h"

/* Sorting Instruction */
void	sort(t_stack **head_a, t_stack **head_b);
void	butterfly_sort(t_stack **head_a, t_stack **head_b);
void	ground_10(t_stack **head_a, t_stack **head_b);
void	ground_3(t_stack **head);

/* Helper Instructions */
int		is_sorted(t_stack *head);
void	to_push_b(t_stack **head_a, t_stack **head_b, t_stack *to_push);
void	to_push_a(t_stack **head_a, t_stack **head_b, t_stack *to_push);
t_stack	*min_node(t_stack *head);

#endif