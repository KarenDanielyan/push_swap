/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:05:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/19 01:47:34 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <libft.h>
#include <ft_printf.h>

t_stack	*new_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
	{
		write(STDERR_FILENO, ERROR_MSG, ft_strlen(ERROR_MSG));
		return (NULL);
	}
	new->value = 0;
	new->next = NULL;
	return (new);
}

int	stack_size(t_stack	*head)
{
	t_stack	*i;
	int		size;

	i = head;
	size = 0;
	if (i)
	{
		while (i)
		{
			i = i->next;
			size++;
		}
	}
	return (size);
}

void	push(t_stack **head, int value)
{
	t_stack	*to_push;

	to_push = (t_stack *)malloc(sizeof(t_stack));
	if (to_push)
	{
		to_push->value = value;
		to_push->next = *head;
		*head = to_push;
	}
	else
		ft_putstr_fd(ERROR_MSG, STDOUT_FILENO);
}

void	pop(t_stack *head)
{
	t_stack	*to_pop;

	if (head)
	{
		to_pop = head;
		head = head->next;
		free(to_pop);
	}
}

void	stack_clear(t_stack **head)
{
	t_stack	*to_free;

	if (head)
	{
		while (*head)
		{
			to_free = *head;
			*head = (*head)->next;
			free(to_free);
		}
	}
}
