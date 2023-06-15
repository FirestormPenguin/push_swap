/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:27:10 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/10 18:47:33 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack *stack)
{
	int	min_index;

	min_index = find_min_a(stack);

	if (min_index <= stack->current_a / 2)
	{
		while (stack->stack_a[0] != stack->stack_a[min_index])
			ra(stack);
	}
	else
	{
		while (stack->stack_a[0] != stack->stack_a[min_index])
			rra(stack);
	}
	pb(stack);
}

void	rotate_to_top(t_stack *stack, char stack_name)
{
	int	index;

	if (stack_name == 'a')
		index = find_min_a(stack);
	else
		index = find_min_b(stack);

	if (index <= stack->current_a / 2)
	{
		while (index--)
			ra(stack);
	}
	else
	{
		index = stack->current_a - index;
		while (index--)
			rra(stack);
	}
}

void	sort_big_stack2(t_stack *stack)
{
	while (stack->current_a > 3)
	{
		push_to_b(stack);
		if (stack->current_b >= 2 && stack->stack_b[0] < stack->stack_b[1])
			sb(stack);
	}
	sort_stack(stack);
	while (stack->current_b > 0)
		pa(stack);

	rotate_to_top(stack, 'a');
}

