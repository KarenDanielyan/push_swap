/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_math.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:26:32 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/05 15:27:25 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_math.h"

int     ft_sqrt(int nb)
{
        unsigned long   i;
        unsigned long   j;
        unsigned long   root;

        if (nb <= 0)
                return (0);
        if (nb == 1)
                return (1);
        i = 0;
        j = (unsigned long)nb;
        while (i <= j)
        {
                root = (i + j) / 2;
                if (root * root == (unsigned long)nb)
                        return ((int)root);
                else if (root * root < (unsigned long)nb)
                        i = root + 1;
                else
                        j = root - 1;
        }
        return (0);
}

int		log_two(int nb)
{
	int n;

	n = 0;
	while (nb)
	{
		nb /= 2;
		n ++;
	}
	return (n);
}