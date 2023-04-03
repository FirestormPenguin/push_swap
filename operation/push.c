/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:23:41 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/03 03:35:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_stack *stack)
{
	int i;

	i = stack->current_a;
	while(i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	i = 1;
	while(i < stack->current_b)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}
	stack->current_b--;
	stack->current_a++;
	return (0);
}

int	pb(t_stack *stack)
{
	int i;

	i = stack->current_b;
	while(i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	i = 1;
	while(i < stack->current_a)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->current_a--;
	stack->current_b++;
	return (0);
}
