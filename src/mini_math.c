/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_math.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:26:32 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/05 17:27:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_math.h"

int	ft_sqrt(int nb)
{
	int	n;

	n = 2;
	while (n * n < nb)
		n ++;
	return (n - 1);
}

int	log_two(int nb)
{
	int	n;

	n = 0;
	while (nb)
	{
		nb /= 2;
		n ++;
	}
	return (n);
}

int	optimize(int len)
{
	return (ft_sqrt(len) + log_two(len) - 1);
}
