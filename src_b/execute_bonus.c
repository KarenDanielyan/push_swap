/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:39:32 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/07 20:29:37 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "push_swap.h"
#include <libft.h>

void	execute_push(char *feed, t_stack **head_a, t_stack **head_b)
{
	int	len;

	if (ft_strlen(feed) < 2)
		len = 2;
	else
		len = ft_strlen(feed);
	if (ft_strncmp("pa", feed, len) == 0)
		push_a(head_a, head_b);
	else if (ft_strncmp("pb", feed, len) == 0)
		push_b(head_a, head_b);
}

void	execute_swap(char *feed, t_stack **head_a, t_stack **head_b)
{
	int	len;

	if (ft_strlen(feed) < 2)
		len = 2;
	else
		len = ft_strlen(feed);
	if (ft_strncmp("sa", feed, len) == 0)
		swap_a(head_a);
	else if (ft_strncmp("sb", feed, len) == 0)
		swap_b(head_b);
	else if (ft_strncmp("ss", feed, len) == 0)
		swap_s(head_a, head_b);
}

void	execute_rotate(char *feed, t_stack **head_a, t_stack **head_b)
{
	int	len;

	if (ft_strlen(feed) < 2)
		len = 2;
	else
		len = ft_strlen(feed);
	if (ft_strncmp("ra", feed, len) == 0)
		rotate_a(head_a);
	else if (ft_strncmp("rb", feed, len) == 0)
		rotate_a(head_b);
	else if (ft_strncmp("rr", feed, len) == 0)
		rotate_r(head_a, head_b);
}

void	execute_rrotate(char *feed, t_stack **head_a, t_stack **head_b)
{
	int	len;

	if (ft_strlen(feed) < 3)
		len = 3;
	else
		len = ft_strlen(feed);
	if (ft_strncmp("rra", feed, len) == 0)
		rrotate_a(head_a);
	else if (ft_strncmp("rrb", feed, len) == 0)
		rrotate_b(head_b);
	else if (ft_strncmp("rrr", feed, len) == 0)
		rrotate_r(head_a, head_b);
}
