/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:39:32 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/06 17:35:53 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "push_swap.h"
#include <libft.h>

void	execute_push(char *feed, t_stack **head_a, t_stack **head_b)
{
	if (ft_strncmp("pa", feed, 2) == 0)
		push_a(head_a, head_b);
	else if (ft_strncmp("pb", feed, 2) == 0)
		push_b(head_a, head_b);
}

void	execute_swap(char *feed, t_stack **head_a, t_stack **head_b)
{
	if (ft_strncmp("sa", feed, 2) == 0)
		swap_a(head_a);
	else if (ft_strncmp("sb", feed, 2) == 0)
		swap_b(head_b);
}

void	execute_rotate(char *feed, t_stack **head_a, t_stack **head_b)
{
	if (ft_strncmp("ra", feed, 2) == 0)
		rotate_a(head_a);
	else if (ft_strncmp("rb", feed, 2) == 0)
		rotate_a(head_b);
}

void	execute_rrotate(char *feed, t_stack **head_a, t_stack **head_b)
{
	if (ft_strncmp("rra", feed, 3) == 0)
		rrotate_a(head_a);
	else if (ft_strncmp("rrb", feed, 3) == 0)
		rrotate_b(head_b);
}
