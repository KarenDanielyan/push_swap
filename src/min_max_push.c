/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:08:49 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 17:33:15 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "push_swap.h"

t_stack *get_max(t_stack *head)
{
	t_stack *second;
	t_stack *last;
	t_stack *max;

	max = head;
	second = head->next;
	last = stack_last(head);
	if (max->value < second->value)
		max = second;
	if (max->value < last->value)
		max = last;
	return (max);
}

t_stack	*get_min(t_stack *head)
{
	t_stack *second;
	t_stack *last;
	t_stack *min;

	min = head;
	second = head->next;
	last = stack_last(head);
	if (head && second)
	{
		if (min->value > second->value)
			min = second;
		if (min->value > last->value)
			min = last;
	}
	return (min);
}

void	to_push_b(t_stack **head_a, t_stack **head_b, t_stack *to_push)
{
	if ((stack_size(*head_a) / 2) > stack_get_ind(*head_a, to_push))
	{
		while ((*head_a)->value != to_push->value)
			rotate_a(head_a);
	}
	else
	{
		while ((*head_a)->value != to_push->value)
			rrotate_a(head_a);
	}
	push_b(head_a, head_b);
}

void	to_push_a(t_stack **head_a, t_stack **head_b, t_stack *to_push)
{
	if ((stack_size(*head_b) / 2) > stack_get_ind(*head_b, to_push))
	{
		while ((*head_b)->value != to_push->value)
			rotate_a(head_a);
	}
	else
	{
		while ((*head_b)->value != to_push->value)
			rrotate_a(head_b);
	}
	push_a(head_a, head_b);
}
