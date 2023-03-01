/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ground_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:34:55 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:09:25 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>
#include <ft_printf.h>

void	ground_2(t_stack **head)
{
	if ((*head)->value > (*head)->next->value)
		swap_a(head);
}

void	ground_3(t_stack **head)
{
	t_stack	*hd;
	t_stack	*second;
	t_stack	*last;

	hd = *head;
	second = (*head)->next;
	last = stack_last(*head);
	if ((hd->value > second->value)
		&& (hd->value > last->value))
		rotate_a(head);
	else if ((second->value > hd->value)
		&& (second->value > last->value))
		rrotate_a(head);
	ground_2(head);
}
