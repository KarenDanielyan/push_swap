/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:41:29 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/20 20:17:30 by kdaniely         ###   ########.fr       */
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