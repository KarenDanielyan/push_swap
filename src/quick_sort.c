/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:38:59 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/04 16:49:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define TRUE 1

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *a, int l, int r)
{
	int	i;
	int	j;
	int	v;

	i = l - 1;
	j = r;
	v = a[r];
	while (TRUE)
	{
		while (a[++i] < v)
			;
		while (v < a[--j])
		{
			if (j == l)
				break ;
		}
		if (i >= j)
			break ;
		swap(&a[i], &a[j]);
	}	
	swap(&a[i], &a[r]);
	return (i);
}

void	quick_sort(int *index, int l, int r)
{
	int	i;

	if (r > l)
	{
		i = partition(index, l, r);
		quick_sort(index, l, i - 1);
		quick_sort(index, (i + 1), r);
	}	
}
