/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:00:23 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 18:54:03 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static int	ascending(int a, int b)
{
	if (a < b)
		return (1);
	return (0);
}

static int	descending(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

static void ascending_merge(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	while (v_head.start || v_end.start)
		to_push_a(head_a, head_b, pick(&v_head, &v_end, &ascending));
}

static void	descending_merge(t_vector v_head, t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	while (v_head.start || v_end.start)
		to_push_a(head_a, head_b, pick(&v_head, &v_end, &descending));
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
