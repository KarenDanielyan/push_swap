/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:41:29 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:17:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_find(t_stack *head, int key)
{
	while (head)
	{
		if (head->value == key)
			return (head);
		head = head->next;
	}
	return (NULL);
}

t_stack	*stack_find_ind(t_stack *head, int index)
{
	while (head && index--)
	{
			head = head->next;
	}
	return (head);
}

t_stack	*stack_last(t_stack *head)
{
	if (head)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
		return (head);
	}
	return (NULL);
}

int	stack_get_ind(t_stack *head, t_stack *to_get)
{
	int	i;

	i = 0;
	if (head && to_get)
	{
		while (head && (head->value != to_get->value))
		{
			i++;
			head = head->next;
		}
	}
	return (i);
}
