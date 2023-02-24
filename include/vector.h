/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:00:50 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 23:35:14 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

#include "stack.h"

typedef enum	e_normal
{
	ASCENDING,
	DESCENDING
}	t_normal;

/* API Calls */
t_normal	get_normal_from_head(t_stack *head);
t_normal	get_normal_from_end(t_stack *head);
int	is_normal_changed_from_head(t_stack *head, t_normal normal);
int	is_normal_changed_from_end(t_stack *head, t_normal normal);

/* Helper Functions */
int	is_descending_from_head(t_stack *head);
int	is_ascending_from_head(t_stack *head);
int is_descending_from_end(t_stack *head);
int	is_ascending_from_end(t_stack *head);

#endif
