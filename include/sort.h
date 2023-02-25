/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:29:53 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/25 13:01:22 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stack.h"

/* Sorting Instruction */
void	sort(t_stack **head_a, t_stack **head_b);
void	merge_sort(t_stack **head_a, t_stack **head_b);
void	ground_10(t_stack **head_a, t_stack **head_b);
void	ground_3(t_stack **head);

/* Helper Instructions */
int		is_sorted(t_stack *head);
void	merge(t_stack **head_a, t_stack **head_b);
void	to_push_b(t_stack **head_a, t_stack **head_b, t_stack *to_push);
void	to_push_a(t_stack **head_a, t_stack **head_b, t_stack *to_push);
t_stack	*get_plausible_max(t_stack *head_a, t_stack *head_b);
t_stack	*get_plausible_min(t_stack *head, t_stack *head_b);

#endif