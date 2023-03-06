/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:27:55 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/06 17:35:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include <libft.h>

static int	is_sorted(t_stack *head)
{
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	checker(t_stack **head_a, t_stack **head_b)
{
	char	*feed;

	if (head_a)
	{
		while (1)
		{
			feed = get_next_line(STDIN_FILENO);
			if (feed == NULL)
				break ;
			execute_push(feed, head_a, head_b);
			execute_rotate(feed, head_a, head_b);
			execute_rrotate(feed, head_a, head_b);
			execute_swap(feed, head_a, head_b);
			free(feed);
		}
		if (!is_sorted(*head_a) || *head_b)
			ft_putstr_fd("KO\n", STDOUT_FILENO);
		else
			ft_putstr_fd("OK\n", STDOUT_FILENO);
	}
}
