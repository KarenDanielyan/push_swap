/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:25:07 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 20:09:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "vector.h"

int	is_descending_from_head(t_stack *head)
{
	if (head->value > head->next->value)
		return (1);
	return (0);
}

int	is_ascending_from_head(t_stack *head)
{
	if (head->value < head->next->value)
		return (1);
	return (0);
}

int is_descending_from_end(t_stack *head)
{
	if (head->value > head->previous->value)
		return (1);
	return (0);
}

int	is_ascending_from_end(t_stack *head)
{
	if (head->value < head->previous->value)
		return (1);
	return (0);	
}