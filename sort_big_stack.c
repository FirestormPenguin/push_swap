/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:33:37 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/28 18:34:28 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_pos(t_stack *stack, int i)
{
	int	j;
	int stack_pos;

	j = 0;
	stack_pos = 0;
	while (j <= stack->current_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[j])
			stack_pos++;
		j++;
	}
	return (stack_pos);
}

void push_to_b(t_stack *stack, int i)
{
	int	n;

	n = 0;
	if (check_pos(stack, i) == stack->current_a)
		{
			n = stack->stack_a[i];
			if (check_pos(stack, i) < stack->current_a / 2)
			{
				while (stack->stack_a[0] != n)
				{
					ra(stack);
				}
				if (n == stack->stack_a[0])
					pb(stack);
			}
			else if (check_pos(stack, i) > stack->current_a / 2)
			{
				while (stack->stack_a[0] != n)
				{
					rra(stack);
				}
				if (n == stack->stack_a[0])
					pb(stack);
			}
		}
	return;
}

void sort_big_stack(t_stack *stack)
{
	int	i;
	
	i = 0;
	while (i <= stack->current_a - 1)
	{
		push_to_b(stack, i);
		i++;
	}

	sort_small_stack(stack);
}
