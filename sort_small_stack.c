/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:19:30 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/20 18:54:58 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_sort3(t_stack *stack)
{
	int	result;

	result = 0;
	if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] < stack->stack_a[2])
	{
		if (stack->stack_a[2] > stack->stack_a[0])
			result = 1;
		else
			result = 3;
	}
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
			result = 2;
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		if (stack->stack_a[2] < stack->stack_a[0])
			result = 5;
		else
			result = 4;
	}
	return(result);
}

void	sort3(t_stack *stack)
{
	if (find_sort3(stack) == 1)
		sa(stack);
	else if (find_sort3(stack) == 2)
	{
		sa(stack);
		rra(stack);
	}
	else if (find_sort3(stack) == 3)
		ra(stack);
	else if (find_sort3(stack) == 4)
	{
		sa(stack);
		ra(stack);
	}
	else if (find_sort3(stack) == 5)
		rra(stack);
}

void final_sort5(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[stack->current_a - 1])
		ra(stack);
}

void sort5(t_stack *stack)
{
	int	i;
	int	j;
	
	j = 0;
	i = stack->current_a;
	while (i > 3)
	{
		pb(stack);
		i--;
		j++;
	}
	sort3(stack);
	while (j > 0)
	{
		pa(stack);
		j--;
	}
	final_sort5(stack);
}

void sort_small_stack(t_stack *stack)
{
	if (stack->current_a == 2)
	{
		if (stack->stack_a[0] > stack->stack_a[1])
			sa(stack);
	}
	else if (stack->current_a == 3)
		sort3(stack);
	else if (stack->current_a <= 5)
		sort5(stack);
}
