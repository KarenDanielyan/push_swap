/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:23 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/28 17:43:27 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "vector.h"


static void	ascending_merge(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	while ((v_head.start != v_head.end) || (v_end.start != v_end.end))
	{
		if ((v_head.start != v_head.end)
			&&(v_head.start->value < v_end.start->value))
		{
			v_head.start = v_head.start->next;
			to_push_a(head_a, head_b, v_head.start->previous);
		}
		else if (v_end.start != v_head.end)
		{
			v_end.start = v_end.start->previous;
			to_push_a(head_a, head_b, v_end.start->next);
		}
	}
	flush_peaks(v_head, v_end, head_a, head_b);
}

static void	descending_merge(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	while ((v_head.start != v_head.end) || (v_end.start != v_end.end))
	{
		if ((v_head.start != v_head.end)
			&&(v_head.start->value > v_end.start->value))
		{
			v_head.start = v_head.start->next;
			to_push_a(head_a, head_b, v_head.start->previous);
		}
		else if (v_end.start != v_end.end)
		{
			v_end.start = v_end.start->previous;
			to_push_a(head_a, head_b, v_end.start->next);
		}
	}
	flush_peaks(v_head, v_end, head_a, head_b);
}

void	merge(t_stack **head_a, t_stack **head_b)
{
	t_vector	v_head;
	t_vector	v_end;

	get_vector_from_head(*head_b, &v_head);
	get_vector_from_end(stack_last(*head_b), &v_end);
	if (v_head.direction != v_end.direction)
	{
		flush_head(v_head, head_a, head_b);
		get_vector_from_head(*head_b, &v_head);
		get_vector_from_end(stack_last(*head_b), &v_end);
	}
	if (v_head.direction == ASCENDING)
		ascending_merge(v_head, v_end, head_a, head_b);
	else
		descending_merge(v_head, v_end, head_a, head_b);
}