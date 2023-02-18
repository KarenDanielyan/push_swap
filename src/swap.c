/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:15:38 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/19 02:03:16 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <libft.h>
#include <ft_printf.h>

static int	swap(t_stack **head)
{
	t_stack	*s;
	int		r;

	r = (head && *head && (*head)->next);
	if (r)
	{
		s = (*head)->next;
		(*head)->next = s->next;
		s->next = *head;
		*head = s;
	}
	return (r);
}

void	swap_a(t_stack	**head)
{
	if (swap(head))
		ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	swap_b(t_stack **head)
{
	if (swap(head))
		ft_putstr_fd("sb\n", STDOUT_FILENO);
}

void	swap_s(t_stack **head_a, t_stack **head_b)
{
	swap_a(head_a);
	swap_b(head_b);
}
