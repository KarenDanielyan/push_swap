/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:34:14 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/25 13:17:18 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "stack.h"

typedef enum	e_direction
{
	EMPTY,
	DESCENDING,
	ASCENDING
}	t_direction;

typedef struct	s_vector
{
	t_direction	direction;
	t_stack		*start;
	t_stack		*end;
}	t_vector;

/*	Vector API	*/
void	get_vector_from_head(t_stack *head, t_vector *vector);
void	get_vector_from_end(t_stack *end, t_vector	*vector);

/*	Helper Functions  */
t_direction	get_direction_from_head(t_stack *head);
t_direction get_direction_from_end(t_stack *end);

#endif