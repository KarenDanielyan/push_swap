/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ground_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:53:03 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 14:56:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

static void		to_push_b(t_stack **head_a, t_stack **head_b, t_stack *to_push)
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

static t_stack	*min_node(t_stack *head)
{
	t_stack	*min;

	min = head;
	while (head)
	{
		if (min->value > head->value)
			min = head;
		head = head->next;
	}
	return (min);
}

int		is_sorted(t_stack *head)
{
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	ground_10(t_stack **head_a, t_stack **head_b)
{
	while (!is_sorted(*head_a))
	{
		while (stack_size(*head_a) > 3)
			to_push_b(head_a, head_b, min_node(*head_a));
		ground_3(head_a);
		while (stack_size(*head_b) != 0)
			push_a(head_a, head_b);
	}	
}