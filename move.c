/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:19:30 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/18 18:00:54 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort3(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] < stack->stack_a[2])
	{
		if (stack->stack_a[2] > stack->stack_a[0])
			sa(stack);		//case 1
		else
			ra(stack);		//case 3
	}
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		sa(stack);			//case 2
		rra(stack);
	}
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		if (stack->stack_a[2] < stack->stack_a[0])
			rra(stack);		//case 5
		else
		{
			sa(stack);		//case 4
			ra(stack);
		}
	}
	else
		return (0);
	return (0);
}
