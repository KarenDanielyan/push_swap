/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:52:10 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/07 18:22:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "push_swap.h"

void	free_2d(char **str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (*(str + i))
		{
			free(*(str + i));
			i++;
		}
		free(str);
	}
}

static int	is_number(const char *s)
{
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

static int	ft_strlen_2d(char **s)
{
	int	i;

	i = 0;
	while (*(s + i) != NULL)
		i++;
	return (i);
}

static void	push_args(char **args, t_stack **head)
{
	int		len;
	long	temp;

	len = ft_strlen_2d(args);
	while (len--)
	{
		if (!is_number(*(args + len)))
		{
			ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
			exit(-1);
		}
		temp = ft_atol(*(args + len));
		if ((temp > INT_MAX || temp < INT_MIN) || stack_find(*head, temp))
		{
			ft_putstr_fd(ERROR_MSG, STDERR_FILENO);
			exit(-1);
		}
		push(head, (int)temp);
	}
}

void	parse(int ac, char **av, t_stack **head_a)
{
	char	**temp;

	temp = NULL;
	while (ac != 1)
	{
		temp = ft_split(av[ac - 1], ' ');
		if (temp)
			push_args(temp, head_a);
		free_2d(temp);
		ac--;
	}
}
