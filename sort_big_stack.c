/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:33:37 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/01 17:28:29 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min_a(t_stack *stack)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= stack->current_a - 1)
	{
		while (j <= stack->current_a - 1)
		{
			if (stack->stack_a[i] <= stack->stack_a[j])
				j++;
			else
			{
				break;
			}
		}
		if (j == stack->current_a - 1)
			stack->min_a = i;
		i++;
		j = 0;
	}
}

void push_to_b(t_stack *stack)
{
	int	n;

	n = stack->stack_a[stack->min_a];
	if (n < stack->current_a / 2)
	{			
		while (stack->stack_a[0] != n)
		{
				ra(stack);
			}
			if (stack->stack_a[0] == n)
				pb(stack);
		}
		else if (n > stack->current_a / 2)
		{
			while (stack->stack_a[0] != n)
			{
				rra(stack);
			}
			if (stack->stack_a[0] == n)
				pb(stack);
		}
}

void sort_big_stack(t_stack *stack)
{
	int	i;

	i = 0;
	find_min_a(stack);
	while (i <= stack->current_a - 1)
	{
		push_to_b(stack);
	}
}
