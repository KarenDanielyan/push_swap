/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:18:15 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/19 02:05:08 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_printf.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*head;
	int		sig;

	head = NULL;
	sig = parse(ac, av, &head);
	if (sig == -1)
	{
		ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
		return (-1);
	}
	return (0);
}
