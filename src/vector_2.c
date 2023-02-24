/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:57:48 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 23:18:28 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "stack.h"

t_normal	get_normal_from_head(t_stack *head)
{
	if (is_ascending_from_head(head))
		return (ASCENDING);
	else
		return (DESCENDING);
}

t_normal	get_normal_from_end(t_stack *head)
{
	if (is_ascending_from_end(head))
		return (ASCENDING);
	else
		return (DESCENDING);
}

int	is_normal_changed_from_head(t_stack *head, t_normal normal)
{
	if (normal ^ get_normal_from_head(head))
		return (1);
	return (0);
}

int	is_normal_changed_from_end(t_stack *head, t_normal normal)
{
	if (normal ^ get_normal_from_end(head))
		return (1);
	return (0);
}
