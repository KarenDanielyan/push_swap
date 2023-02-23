/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:29:53 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 18:43:41 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stack.h"

typedef enum	e_normal
{
	ASCENDING,
	DESCENDING
}	t_normal;

/* Sorting Instruction */
void	sort(t_stack **head_a, t_stack **head_b);
void	heap_sort(t_stack **head_a, t_stack **head_b);
void	ground_10(t_stack **head_a, t_stack **head_b);
void	ground_3(t_stack **head);

/* Helper Instructions */
int		is_sorted(t_stack *head);
void	to_push_b(t_stack **head_a, t_stack **head_b, t_stack *to_push);
t_stack	*get_max(t_stack *head);
t_stack	*get_min(t_stack *head);

/* Directonal Vector API */
t_normal	get_normal(t_stack *head);
int			is_normal_changed(t_stack *head, t_normal normal);

#endif