/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:33:37 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/01 17:58:30 by egiubell         ###   ########.fr       */
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
		{
			stack->min_a = i;
			return;
		}
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
		pb(stack);
		}
	else if (n > stack->current_a / 2)
	{
		while (stack->stack_a[0] != n)
		{
			rra(stack);
		}
		pb(stack);
	}
}

void sort_big_stack(t_stack *stack)
{
	while (stack->current_a > 3)
	{
		find_min_a(stack);
		push_to_b(stack);
	}
	sort_small_stack(stack);
}
