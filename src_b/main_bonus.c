/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:15 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/05 18:49:13 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libft.h>

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
	stack_clear(&head_a);
	stack_clear(&head_b);
	return (rv);
}
