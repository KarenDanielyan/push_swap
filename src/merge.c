/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:58:05 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 23:55:33 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "sort.h"

static void directional_merge(t_stack **head_a, t_stack **head_b)
{
	t_normal	normal_head;
	t_normal	normal_end;

	normal_head = get_normal_from_head(*head_b);
	normal_end = get_normal_from_end(stack_last(*head_b));
	if (normal_head == normal_end)
	{
		if (normal_head == ASCENDING)
			ascending_merge(head_a, head_b);
		else
			descending_merge(head_a, head_b);
	}
	else
	{
		while (!is_normal_changed_from_head(*head_b, normal_head))
			to_push_a(head_a, head_b, *head_b);
	}
}

void	merge(t_stack **head_a, t_stack **head_b)
{
	while (stack_size(*head_b) != 1)
	{
		
	}
}
