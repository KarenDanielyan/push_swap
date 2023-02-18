/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:17:52 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/19 02:06:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

# define ERROR_MSG	"Error\n"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_stack;

/* Description: Creates a new stack. */
t_stack	*new_stack(void);
/* Description: Counts the size of the stack. */
int		stack_size(t_stack *head);	
/* Description: Push element into the stack. */
void	push(t_stack **head, int value);
/* Description: Pop element from the stack. */
void	pop(t_stack *head);
/* Description: Empty the stack and free allocated memory for it.*/
void	stack_clear(t_stack **head);

#endif