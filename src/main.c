/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:15 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/20 15:12:40 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>
#include "push_swap.h"

static void print_stack(t_stack *head)
{
	int i;

	while (head)
	{
		i = head->value;
		ft_printf("%d\n", i);
		head = head->next;
	}
}

int	main(int ac, char **av)
{
	int		rv;
	t_stack	*head;
	int		sig;

	head = NULL;
	sig = parse(ac, av, &head);
	rv = 0;
	if (sig == -1)
	{
		ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
		rv = -1;
	}
	else
		print_stack(head); // execute push_swap sorting instead of print
	stack_clear(&head);
	return (rv);
}
