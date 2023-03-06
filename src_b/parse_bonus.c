/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:52:10 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/06 14:12:23 by kdaniely         ###   ########.fr       */
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

static int	push_args(char **args, t_stack **head)
{
	int		len;
	int		sig;
	long	temp;

	len = ft_strlen_2d(args);
	sig = 1;
	while (len-- && sig == 1)
	{
		if (!is_number(*(args + len)))
		{
			sig = -1;
			break ;
		}
		temp = ft_atol(*(args + len));
		if ((temp > INT_MAX || temp < INT_MIN) || stack_find(*head, temp))
		{
			sig = -1;
			break ;
		}
		sig = push(head, (int)temp);
	}
	return (sig);
}

int	parse(int ac, char **av, t_stack **head_a)
{
	char	**temp;
	int		sig;

	sig = 1;
	temp = NULL;
	while (ac != 1)
	{
		temp = ft_split(av[ac - 1], ' ');
		if (temp)
			sig = push_args(temp, head_a);
		free_2d(temp);
		if (sig == -1)
			break ;
		ac--;
	}
	return (sig);
}
