/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:58:47 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/24 00:51:55 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "vector.h"

static void	push_leftover_head(t_stack *)
{

}

static void	push_leftover_end(t_stack **head_a, t_stack **head)
{

}

void	ascending_merge(t_stack **head_a, t_stack **head_b)
{
	t_stack	*root;
	t_stack	*end;
	int		still_ascend;

	root = *head_b;
	end = stack_last(*head_b);
	still_ascend = !is_normal_changed_from_head(root, ASCENDING) && !is_normal_changed_from_end(end, ASCENDING);
	while (still_ascend)
	{
		if (root->value < end->value)
		{
			to_push_a(head_a, head_b, root);
			root = root->next;
		}
		else
		{
			to_push_a(head_a, head_b, end);
			end = end->previous;
		}
		still_ascend = !is_normal_changed_from_head(root, ASCENDING) && !is_normal_changed_from_end(end, ASCENDING);
	}
	if 
}
