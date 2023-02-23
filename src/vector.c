/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:25:07 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 18:39:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static int	is_descending(t_stack *head)
{
	if (head->value > head->next->value)
		return (1);
	return (0);	
}

static int	is_ascending(t_stack *head)
{
	if (head->value < head->next->value)
		return (1);
	return (0);
}

t_normal	get_normal(t_stack *head)
{
	if (is_ascending(head))
		return (ASCENDING);
	else
		return (DESCENDING);
}

int	is_normal_changed(t_stack *head, t_normal normal)
{
	if (normal ^ get_normal(head->next))
		return (1);
	return (0);
}