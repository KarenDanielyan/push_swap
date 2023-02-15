/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:26:31 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/21 16:25:24 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: DNE
*
*	Description: Deletes and frees the given node and every
*	successor of that node, using the function ’del’ and free().
*	Finally, the pointer to the list must be set to NULL.
*
*	Return Value: None
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (lst && del)
	{
		while (*lst)
		{
			a = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = a;
		}
	}
}
