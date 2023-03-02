/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shuffle_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:31:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/02 14:57:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include <libft.h>

/* which == 0 means to_push_b and which == 1 means to_push_a */
static void	ascend(t_stack **head_a, t_stack **head_b, int which)
{
	t_stack	*to_push;

	if (which == 0)
		to_push = get_plausible_max(*head_a, *head_b);
	else
		to_push = get_plausible_max(*head_b, *head_a);
	while (to_push)
	{
		if (which == 0)
		{
			to_push_b(head_a, head_b, to_push);
			to_push = get_plausible_max(*head_a, *head_b);
		}
		else
		{
			to_push_a(head_a, head_b, to_push);
			to_push = get_plausible_max(*head_b, *head_a);
		}
	}
}

/* which == 0 means to_push_b and which == 1 means to_push_a */
static void	descend(t_stack **head_a, t_stack **head_b, int which)
{
	t_stack	*to_push;

	if (which == 0)
		to_push = get_plausible_min(*head_a, *head_b);
	else
		to_push = get_plausible_min(*head_b, *head_a);
	while (to_push)
	{
		if (which == 0)
		{
			to_push_b(head_a, head_b, to_push);
			to_push = get_plausible_min(*head_a, *head_b);
		}
		else
		{
			to_push_a(head_a, head_b, to_push);
			to_push = get_plausible_min(*head_b, *head_a);
		}
	}
}

void	shuffle_sort(t_stack **head_a, t_stack **head_b)
{
	while (!is_sorted(*head_a))
	{
		while (stack_size(*head_a) != 0)
		{
			descend(head_a, head_b, 0);
			ascend(head_a, head_b, 0);
		}
		while (stack_size(*head_b) != 0)
		{
			descend(head_a, head_b, 1);
			ascend(head_a, head_b, 1);
		}
	}
}
