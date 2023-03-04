/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:40:41 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/04 16:04:35 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static int	*fill_index(t_stack *head_a)
{
	int	*a;
	int	i;

	i = 0;
	a = (int *)malloc(stack_size(head_a) * sizeof(int));
	while (head_a)
	{
		a[i] = head_a->value;
		head_a = head_a->next;
		i ++;
	}
	return (a);
}

static void	flush_index(t_stack *head_a, int *index)
{
	int i;
	
	while (head_a)
	{
		i = 0;
		while (head_a->value != index[i])
			i++;
		head_a->index = i;
		head_a = head_a->next;
	}
}

void	to_index(t_stack **head_a)
{
	int	*index;
	
	index = fill_index(*head_a);
	quick_sort(index, 0, (stack_size(*head_a) - 1));
	flush_index(*head_a, index);
	free(index);
}