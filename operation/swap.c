/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:07:14 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/18 17:08:58 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack *stack)
{
	int n;
	if(stack->count_a <= 1)
		return(0);
	n = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = n;
	return (0);
}

int	sb(t_stack *stack)
{
	int n;
	if(stack->count_b <= 1)
		return(0);
	n = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = n;
	return (0);
}

int	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	return(0);
}
