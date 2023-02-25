/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:40:51 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/25 13:23:19 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	get_vector_from_head(t_stack *head, t_vector *vector)
{
	t_direction	direction;

	vector->start = head;
	direction = get_direction_from_head(head);
	while (head && (get_direction_from_head(head) == direction))
		head = head->next;
	vector->end = head;
	vector->direction = direction;
}

void	get_vector_from_end(t_stack	*end, t_vector *vector)
{
	t_direction	direction;

	vector->start = end;
	direction = get_direction_from_end(end);
	while (end && (get_direction_from_end(end) == direction))
		end = end->previous;
	vector->end = end;
	vector->direction = direction;
}