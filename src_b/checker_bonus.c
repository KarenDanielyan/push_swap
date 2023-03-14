/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:27:55 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/14 16:08:32 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "push_swap.h"
#include <libft.h>

#define INSTRUCTIONS "pa pb sa sb ss ra rb rr rra rrb rrr"

static char	*gets(void)
{
	char	*to_free;
	char	*feed;

	to_free = get_next_line(STDIN_FILENO);
	feed = ft_strtrim(to_free, "\n");
	free(to_free);
	return (feed);
}

static void	instruction_check(char *feed)
{
	if (!ft_strnstr(INSTRUCTIONS, feed, ft_strlen(INSTRUCTIONS)))
	{
		ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}

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
			feed = gets();
			instruction_check(feed);
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
