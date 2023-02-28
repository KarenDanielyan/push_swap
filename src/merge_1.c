/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:29:02 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/28 16:37:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "sort.h"

static void	ascending_peaks(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	if (v_head.end->value < v_end.end->value)
	{
		to_push_a(head_a, head_b, v_head.end);
		to_push_a(head_a, head_b, v_end.end);
	}
	else
	{
		to_push_a(head_a, head_b, v_end.end);
		to_push_a(head_a, head_b, v_head.end);
	}
}

static void	descending_peaks(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	if (v_head.end->value > v_end.end->value)
	{
		to_push_a(head_a, head_b, v_head.end);
		to_push_a(head_a, head_b, v_end.end);
	}
	else
	{
		to_push_a(head_a, head_b, v_end.end);
		to_push_a(head_a, head_b, v_head.end);
	}
}

/* NOTE: Always consider that flush is performed from top of the head. */
void	flush_head(t_vector v_head, t_stack **head_a, t_stack **head_b)
{
	while (v_head.start != v_head.end)
	{
		v_head.start = v_head.start->next;
		to_push_a(head_a, head_b, v_head.start->previous);
	}
}

void		flush_peaks(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	if (v_head.end != v_end.end)
	{
		if (v_head.direction == ASCENDING)
			ascending_peaks(v_head, v_end, head_a, head_b);
		else
			descending_peaks(v_head, v_end, head_a, head_b);
	}
	else
		to_push_a(head_a, head_b, v_head.end);
}