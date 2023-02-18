/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:17:52 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/18 14:35:56 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

#define ERROR_MSG_MEM	"Insufficient memory for malloc!!\n"

typedef struct	s_node
{
	int	value;
	struct s_node	*next;
}	t_stack;

/* Description: Creates a new stack. */
t_stack	*new_stack(void);
/* Description: Counts the size of the stack. */
int		stack_size(t_stack *head);	
/* Description: Push element into the stack. */
void	push(t_stack *head);
/* Description: Pop element from the stack. */
void	pop(t_stack *head);
/* Description: Empty the stack and free allocated memory for it.*/
void	stack_clear(t_stack **head);

/* push_swap instructions */
char	*swap_a(t_stack	*head);
char	*swap_b(t_stack	*head);
char	*rotate_a(t_stack *head);
char	*rotate_b(t_stack *head);
char	*rrotate_a(t_stack *head);
char	*rrotate_b(t_stack *head);
char	*swap_s(t_stack	*head_a, t_stack *head_b);
char	*push_a(t_stack	*head_a, t_stack *head_b);
char	*push_b(t_stack	*head_a, t_stack *head_b);
char	*rotate_r(t_stack *head_a, t_stack *head_b);
char	*rrotate_r(t_stack	*head_a, t_stack *head_b);
#endif