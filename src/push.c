/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:57:05 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:14:07 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

/*	Description: Pushes node from stack head_2 into stack head_1.
	Do nothing if head_2 is empty. */
static	int	ps_push(t_stack **head_1, t_stack **head_2)
{
	int		rv;
	t_stack	*tmp;

	rv = (head_1 && head_2 && *head_2);
	if (rv)
	{
		tmp = *head_2;
		*head_2 = (*head_2)->next;
		if (*head_2)
			(*head_2)->previous = NULL;
		tmp->next = *head_1;
		if (*head_1)
			(*head_1)->previous = tmp;
		*head_1 = tmp;
	}
	return (rv);
}

void	push_a(t_stack **head_a, t_stack **head_b)
{
	if (ps_push(head_a, head_b) && !PRETTY_PRINT)
		ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	push_b(t_stack	**head_a, t_stack **head_b)
{
	if (ps_push(head_b, head_a) && !PRETTY_PRINT)
		ft_putstr_fd("pb\n", STDOUT_FILENO);
}
