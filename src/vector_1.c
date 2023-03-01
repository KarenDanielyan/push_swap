/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:44:10 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:17:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_direction	get_direction_from_head(t_stack *head)
{
	if (head)
	{
		if (head->next && head->value < head->next->value)
			return (ASCENDING);
		return (DESCENDING);
	}
	return (EMPTY);
}

t_direction	get_direction_from_end(t_stack *end)
{
	if (end)
	{
		if (end->previous && end->value < end->previous->value)
			return (ASCENDING);
		return (DESCENDING);
	}
	return (EMPTY);
}
