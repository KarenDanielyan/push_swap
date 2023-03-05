/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:19:37 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:14:38 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

static int	rotate(t_stack **head)
{
	int		rv;
	t_stack	*last;

	rv = (head && *head && (*head)->next);
	if (rv)
	{
		last = stack_last(*head);
		last->next = *head;
		(*head)->previous = last;
		*head = (*head)->next;
		(*head)->previous->next = NULL;
		(*head)->previous = NULL;
	}
	return (rv);
}

void	rotate_a(t_stack **head)
{
	if (rotate(head) && !PRETTY_PRINT)
		ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void	rotate_b(t_stack **head)
{
	if (rotate(head) && !PRETTY_PRINT)
		ft_putstr_fd("rb\n", STDOUT_FILENO);
}

void	rotate_r(t_stack **head_a, t_stack **head_b)
{
	rotate_a(head_a);
	rotate_b(head_b);
}
