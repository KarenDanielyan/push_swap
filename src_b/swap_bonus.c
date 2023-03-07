/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:15:38 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/07 18:18:29 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

static int	swap(t_stack **head)
{
	t_stack	*s;
	int		r;

	r = (head && *head && (*head)->next);
	if (r)
	{
		s = (*head)->next;
		(*head)->previous = s;
		(*head)->next = s->next;
		s->previous = NULL;
		s->next = *head;
		*head = s;
	}
	return (r);
}

void	swap_a(t_stack	**head)
{
	swap(head);
}

void	swap_b(t_stack **head)
{
	swap(head);
}

void	swap_s(t_stack **head_a, t_stack **head_b)
{
	swap_a(head_a);
	swap_b(head_b);
}
