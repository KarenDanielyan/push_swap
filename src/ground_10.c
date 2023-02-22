/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ground_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:53:03 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/22 19:54:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

static void		to_push_a(t_stack **head_a, t_stack **head_b, t_stack *to_push)
{
	while ((*head_a)->value != to_push->value)
		rotate_a(head_a);
	push_a(head_a, head_b);
}

static t_stack	*min_node(t_stack *head)
{
	t_stack	*min;

	min = head;
	while (head)
	{
		if (min->value < head->value)
			min = head;
		head = head->next;
	}
	return (min);
}

void	ground_10(t_stack **head_a, t_stack **head_b)
{
	
}