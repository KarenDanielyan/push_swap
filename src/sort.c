/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:22:30 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/02 14:56:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sort.h"
#include <libft.h>

int	is_sorted(t_stack *head)
{
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	sort(t_stack **head_a, t_stack **head_b)
{
	if (stack_size(*head_a) <= 12)
		ground_10(head_a, head_b);
	else
		shuffle_sort(head_a, head_b);
}
