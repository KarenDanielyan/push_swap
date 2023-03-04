/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:08:49 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/04 16:47:09 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "push_swap.h"

/* Description: Pushes node to_push from b to a. */
void	to_push_a(t_stack **head_a, t_stack **head_b, t_stack *to_push)
{
	if ((stack_size(*head_b) / 2) > stack_get_ind(*head_b, to_push))
	{
		while ((*head_b)->value != to_push->value)
			rotate_b(head_b);
	}
	else
	{
		while ((*head_b)->value != to_push->value)
			rrotate_b(head_b);
	}
	push_a(head_a, head_b);
}

/* Description: Pushes node to_push from a to b. */
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
