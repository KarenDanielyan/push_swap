/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:41:29 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/19 14:12:46 by kdaniely         ###   ########.fr       */
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