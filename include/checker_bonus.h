/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:30:01 by kdaniely          #+#    #+#             */
/*   Updated: 2023/03/06 15:56:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "stack.h"

/* Checker functions */
/*
*	Reference: DNE
*
*	Description: Returns a line read from file pointed by
*	file descriptor. If fd is invalid, function returns
*	NULL;
*	NOTE: In order to not have leaks, run get_next_line() function
*	with -42 parameter in order to free the static allocated space
*	before ending program execution.
*
*	Return Value: C-standard string with nl, or NULL on invalid fd.
*/
char	*get_next_line(int fd);

/*
*	Description: Executes the commands recieved from STDIN,
*	and executes them on stack provided as command line arguments.
*	
*	Return Value: Returns 1 on succesfull sort and -1 otherwise.
*/
void		checker(t_stack **head_a, t_stack **head_b);


/* Helper Functions */
void	execute_push(char *feed, t_stack **head_a, t_stack **head_b);
void	execute_swap(char *feed, t_stack **head_a, t_stack **head_b);
void	execute_rotate(char *feed, t_stack **head_a, t_stack **head_b);
void	execute_rrotate(char *feed, t_stack **head_a, t_stack **head_b);

#endif
