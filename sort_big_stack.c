/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:33:37 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/05 18:47:36 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_a(t_stack *stack)
{
	int	i;
	int	j;

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
				break ;
			}
		}
		if (j == stack->current_a)
			return (i);
		i++;
		j = 0;
	}
	return (-1);
}

void	push_to_b(t_stack *stack)
{
	int	n;

	n = stack->stack_a[find_min_a(stack)];
	if (n <= stack->current_a / 2)
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

void	sort_big_stack(t_stack *stack)
{
	while (stack->current_a > 3)
	{
		push_to_b(stack);
	}
	sort_stack(stack);
	while (stack->current_a != stack->count_a)
	{
		pa(stack);
	}
}
