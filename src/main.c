/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:15 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/23 15:03:26 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>
#include "push_swap.h"

// static void print_stack(t_stack *head)
// {
// 	int i;

// 	while (head)
// 	{
// 		i = head->value;
// 		ft_printf("%d\n", i);
// 		head = head->next;
// 	}
// }

int	main(int ac, char **av)
{
	int		rv;
	t_stack	*head_a;
	t_stack	*head_b;
	int		sig;

	head_a = NULL;
	head_b = NULL;
	sig = parse(ac, av, &head_a);
	rv = 0;
	if (sig == -1)
	{
		ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
		rv = -1;
	}
	else if (ac != 1)
		ground_10(&head_a, &head_b);
	stack_clear(&head_a);
	return (rv);
}
