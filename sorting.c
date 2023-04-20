/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:19:30 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/20 17:47:26 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_sort3(t_stack *stack)
{
	int	i;
	int ret;

	i = 0;
	ret = 0;
	if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] < stack->stack_a[2])
	{
		if (stack->stack_a[2] > stack->stack_a[0])
			ret = 1;
		else
			ret = 3;
	} 
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
			ret = 2;
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		if (stack->stack_a[2] < stack->stack_a[0])
			ret = 5;
		else
			ret = 4;
	}
	return (ret);
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
