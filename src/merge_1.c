/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:29:02 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/01 20:10:27 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static t_stack	*mini_pick(t_vector **v_head, t_vector **v_end,
						int (*cmp)(int a, int b))
{
	t_stack	*temp;

	if ((!(*v_end)->start && (*v_head)->start)
		|| ((*v_head)->start && (*v_end)->start
			&& cmp((*v_head)->start->value, (*v_end)->start->value)))
	{
		temp = (*v_head)->start;
		if ((*v_head)->start == (*v_head)->end)
			(*v_head)->start = NULL;
		else
			(*v_head)->start = (*v_head)->start->next;
		return (temp);
	}
	else if ((!(*v_head)->start && (*v_end)->start)
		|| ((*v_head)->start && (*v_end)->start
			&& !cmp((*v_head)->start->value, (*v_end)->start->value)))
	{
		temp = (*v_end)->start;
		if ((*v_end)->start == (*v_end)->end)
			(*v_end)->start = NULL;
		else
			(*v_end)->start = (*v_end)->start->previous;
		return (temp);
	}
	return (NULL);
}

t_stack	*pick(t_vector *v_head, t_vector *v_end,
						int (*cmp)(int a, int b))
{
	t_stack	*temp;

	if ((v_head->start == v_end->start) && (v_head->start == v_head->end))
	{
		temp = v_head->start;
		v_head->start = NULL;
		v_end->start = NULL;
		return (temp);
	}
	else
		return (mini_pick(&v_head, &v_end, cmp));
}

/* NOTE: Always consider that flush is performed from top of the head. */
void	flush_head(t_vector v_head, t_stack **head_a, t_stack **head_b)
{
	while (v_head.start != v_head.end)
	{
		v_head.start = v_head.start->next;
		to_push_a(head_a, head_b, v_head.start->previous);
	}
}

void	flush_end(t_vector v_end, t_stack **head_a, t_stack **head_b)
{
	while (v_end.start != v_end.end)
	{
		v_end.start = v_end.start->previous;
		to_push_a(head_a, head_b, v_end.start->next);
	}
}
