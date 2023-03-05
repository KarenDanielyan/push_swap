/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:02:55 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/05 17:27:51 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "mini_math.h"
#include "push_swap.h"

static	void	shuffle(t_stack **head_a, t_stack **head_b)
{
	int	factor;
	int	count;

	count = 0;
	factor = optimize(stack_size(*head_a));
	while (*head_a)
	{
		if ((*head_a)->index <= count)
		{
			push_b(head_a, head_b);
			rotate_b(head_b);
			count ++;
		}
		else if ((*head_a)->index > count
			&& (*head_a)->index <= (count + factor))
		{
			push_b(head_a, head_b);
			count ++;
		}
		else
			rotate_a(head_a);
	}
}

void	butterfly_sort(t_stack **head_a, t_stack **head_b)
{
	shuffle(head_a, head_b);
	while (*head_b)
		to_push_a(head_a, head_b, max_node(*head_b));
}
