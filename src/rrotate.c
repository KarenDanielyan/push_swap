/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:05:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/28 15:07:43 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

static int	rrotate(t_stack **head)
{
	int		rv;
	t_stack	*last;

	rv = (head && *head && (*head)->next);
	if (rv)
	{
		last = stack_last(*head);
		last->next = *head;
		*head = last;
		(*head)->previous->next = NULL;
		(*head)->previous = NULL;
		(*head)->next->previous = (*head);
	}
	return (rv);
}

void	rrotate_a(t_stack **head)
{
	if (rrotate(head) && !PRETTY_PRINT)
		ft_putstr_fd("rra\n", STDOUT_FILENO);
}

void	rrotate_b(t_stack **head)
{
	if (rrotate(head) && !PRETTY_PRINT)
		ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

void	rrotate_r(t_stack **head_a, t_stack **head_b)
{
	rrotate_a(head_a);
	rrotate_b(head_b);
}
