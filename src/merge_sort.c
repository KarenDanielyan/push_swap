/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:31:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/25 14:37:17 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "vector.h"
#include <libft.h>

static void ascend(t_stack **head_a, t_stack **head_b)
{
	t_stack	*to_push;

	to_push = get_plausible_max(*head_a, *head_b);
	while (to_push)
	{
		to_push_b(head_a, head_b, to_push);
		to_push = get_plausible_max(*head_a, *head_b);
	}
}

static void descend(t_stack **head_a, t_stack **head_b)
{
	t_stack	*to_push;

	to_push = get_plausible_min(*head_a, *head_b);
	while (to_push)
	{
		to_push_b(head_a, head_b, to_push);
		to_push = get_plausible_min(*head_a, *head_b);
	}
}

void	merge_sort(t_stack **head_a, t_stack **head_b)
{
	t_vector	v_head;
	t_vector	v_end;
	t_list		*push_table;
	

	while (!is_sorted(*head_a))
	{
		while (stack_size(*head_a) != 0)
		{
			descend(head_a, head_b);
			ascend(head_a, head_b);
		}
		get_vector_from_head(*head_b, &v_head);
		get_vector_from_end(stack_last(*head_b), &v_end);
		while ((v_head.start != v_head.end) || (v_end.start != v_end.end))
		{
			if ((v_head.start != v_head.end)
				&&(v_head.start->value > v_end.start->value))
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
		// NOTE: here we need another handler but for this specific case
		// we can just push
		// TODO: Peak hanler
		// TODO: Move this into merge function.
		to_push_a(head_a,head_b, *head_b);
		//merge(head_a, head_b);
	}
}