/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:31:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/24 22:49:49 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

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
	while (!is_sorted(*head_a))
	{
		while (stack_size(*head_a) != 0)
		{
			ascend(head_a, head_b);
			descend(head_a, head_b);
		}
		//merge(head_a, head_b);
	}
}