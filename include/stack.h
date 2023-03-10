/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:17:52 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/07 20:29:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>

# define ERROR_MSG_MEM "Fatal Error: Insufficient memory in the heap."

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*previous;
	struct s_node	*next;
}	t_stack;

/*
*	Description: Creates a new stack.
*
*	Return Value: Empty stack or NULL if
*	allocation fails.
*/
t_stack	*new_stack(void);

/*
*	Description: Counts the size of the stack.
*/
int		stack_size(t_stack *head);	

/*
*	Description: Push element into the stack.
*/
void	push(t_stack **head, int value);

/*
*	Description: Pop element from the stack.
*	Does nothing if stack is empty.
*/
void	pop(t_stack *head);

/*
*	Description: Empty the stack and free allocated memory for it.
*/
void	stack_clear(t_stack **head);

/*
*	Description: Finds a node in a stack that contains `key`.
*
*	Return Value: Pointer to the node or NULL if there is none.
*/
t_stack	*stack_find(t_stack *head, int key);

/*
*	Description: Returns the deepest node from the stack, or
*	NULL if empty.
*/
t_stack	*stack_last(t_stack	*head);

/*
*	Description: Finds a node in a stack that is under given index.
*
*	Return Value: Pointer to the node or NULL if there is none.
*/
t_stack	*stack_find_ind(t_stack *head, int index);

/*
*	Description: Return index of the node in the stack.
*
*	Return Value: Index number or zero if stack is empty.
*/
int		stack_get_ind(t_stack *head, t_stack *to_get);

#endif