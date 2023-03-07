/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:15 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/07 21:04:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker_bonus.h"

int	main(int ac, char **av)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (ac != 1)
	{
		parse(ac, av, &head_a);
		checker(&head_a, &head_b);
		stack_clear(&head_a);
		stack_clear(&head_b);
	}
	return (0);
}
