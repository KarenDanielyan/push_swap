/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:40:24 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 18:54:16 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "push_swap.h"

static void	ascend(t_stack **head_a, t_stack **head_b)
{
	t_stack *current_max;

	if (stack_size(*head_b) == 0)
		to_push_b(head_a, head_b, get_max(*head_a));
	current_max = get_max(*head_a);
	while (current_max->value > (*head_b)->value)
	{
			to_push_b(head_a, head_b, current_max);
			current_max = get_max(*head_a);
	}	
}

static void	descend(t_stack **head_a, t_stack **head_b)
{
	t_stack	*current_min;
	
	if (stack_size(*head_b) == 0)
		to_push_b(head_a, head_b, get_min(*head_a));
	current_min = get_min(*head_a);
	while (current_min->value < (*head_b)->value)
	{
		to_push_b(head_a, head_b, current_min);
		current_min = get_min(*head_a);
	}
}

static void directional_merge(t_stack **head_a, t_stack **head_b)
{
	t_stack *from_head;
	t_stack *from_end;
	int		normal_head;
	int		normal_end;

	from_head = *head_b;
	from_end = stack_last(*head_b);
	normal_head = 1;
	normal_end = 1;
	
}

static void	merge(t_stack **head_a, t_stack **head_b)
{
	t_stack	*from_end;
	t_stack	*from_head;


	from_head = *head_a;
	from_end = stack_last(*head_b);
	while (stack_size(*head_b) != 0)
	{

	}
}

void	heap_sort(t_stack **head_a, t_stack **head_b)
{
	while (stack_size(*head_a) != 0)
	{
		ascend(head_a, head_b);
		descend(head_a, head_b);
	}
	/*while (!is_sorted(head_a) && stack_size(*head_b) != 0)
	{

	}*/
}