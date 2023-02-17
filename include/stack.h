/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:17:52 by kdaniely          #+#    #+#             */
/*   Updated: 2023/02/17 22:51:22 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct	s_node
{
	int	value;
	s_node	*next;
}	t_stack;

/* Description: Checks whether stack is empty or not. */
int		is_empty(t_stack s);
/* Description: Creates a new stack. */
int		new_stack(void);
/* Description: Push element into the stack. */
void	push(t_stack *head);
/* Description: Pop element from the stack. */
void	pop(t_stack *head, t_stack	*to_pop);
/* Description: Empty the stack and free allocated memory for it.*/
void	free(t_stack *head);

/* push_swap instructions */
char	*swap_a(t_stack	*head);
char	*swap_b(t_stack	*head);
char	*swap_s(t_stack	*head_a, t_stack *head_b);
char	*push_a(t_stack	*head_a, t_stack *head_b);
char	*push_b(t_stack	*head_a, t_stack *head_b);
char	*rotate_a(t_stack *head);
char	*rotate_b(t_stack *head);
char	*rotate_r(t_stack *head_a, t_stack *head_b);
char	*rrotate_a(t_stack *head);
char	*rrotate_b(t_stack *head);
char	*rrotate_r(t_stack	*head_a, t_stack *head_b);

#endif