/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:47:02 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/24 22:38:16 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "push_swap.h"
#include <libft.h>

static int	is_present(t_list *list, void *key)
{
	while (list)
	{
		if (list->content == key)
			return (1);
		list = list->next;
	}
	return (0);
}

static t_stack	*get_max(t_stack **values, t_list *exclude)
{
	int		i;
	t_stack	*max;

	i = 0;
	max = NULL;
	while (i < 3)
	{
		if ((!max || (max->value < (*(values + i))->value)) \
			&& !is_present(exclude, (*(values + i))))
			max = (*(values + i));
		i ++;
	}
	return (max);
}

static t_stack	*get_min(t_stack **values, t_list *exclude)
{
	int		i;
	t_stack	*min;

	i = 0;
	min = NULL;
	while (i < 3)
	{
		if ((!min || (min->value >= (*(values + i))->value)) \
			&& !is_present(exclude, (*(values + i))))
			min = (*(values + i));
		i ++;
	}
	return (min);
}

/* Descripton: Gets smallest possible node out of 3,
   thats bigger than head of b, to push into b. */
t_stack	*get_plausible_max(t_stack *head_a, t_stack *head_b)
{
	t_list	*exclude;
	t_stack	*plausible_max;
	t_stack	*values[3];
	int		i;

	i = 0;
	exclude = NULL;
	plausible_max = head_a;
	if (head_a && head_a->next)
	{
		values[0] = head_a;
		values[1] = head_a->next;
		values[2] = stack_last(head_a);
		while (i < 3)
		{
			plausible_max = get_min(values, exclude);
			if (!head_b || !plausible_max || (plausible_max->value > head_b->value))
				break ;
			ft_lstadd_back(&exclude, ft_lstnew(plausible_max));
		}
	}
	if (is_present(exclude, plausible_max))
		return (NULL);
	return (plausible_max);
}

t_stack	*get_plausible_min(t_stack *head_a, t_stack *head_b)
{
	t_list	*exclude;
	t_stack	*plausible_min;
	t_stack	*values[3];
	int		i;

	i = 0;
	plausible_min = head_a;
	exclude = NULL;
	if (head_a && head_a->next)
	{
		values[0] = head_a;
		values[1] = head_a->next;
		values[2] = stack_last(head_a);
		while (i < 3)
		{
			plausible_min = get_max(values, exclude);
			if (!head_b || !plausible_min || (plausible_min->value < head_b->value))
				break ;
			ft_lstadd_back(&exclude, ft_lstnew(plausible_min));
		}
	}
	if (is_present(exclude, plausible_min))
		return (NULL);
	return (plausible_min);
}
