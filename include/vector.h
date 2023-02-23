/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:00:50 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 20:09:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef enum	e_normal
{
	ASCENDING,
	DESCENDING
}	t_normal;

/* API Calls */

/* Helper Functions */
int	is_descending_from_head(t_stack *head);
int	is_ascending_from_head(t_stack *head);
int is_descending_from_end(t_stack *head);
int	is_ascending_from_end(t_stack *head);

#endif
