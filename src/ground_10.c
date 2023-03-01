/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ground_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:53:03 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:09:39 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sort.h"
#include <libft.h>

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
