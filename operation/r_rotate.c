/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:05:36 by marvin            #+#    #+#             */
/*   Updated: 2023/05/05 18:51:18 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_log_rr(int n)
{
	if (n == 1)
		printf("rra\n");
	else if (n == 2)
		printf("rrb\n");
	else if (n == 3)
		printf("rrr\n");
}

int	rra(t_stack *stack)
{
	int	i;
	int	n;

	i = stack->current_a;
	n = stack->stack_a[stack->current_a - 1];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = n;
	print_log_rr(1);
	return (0);
}

int	rrb(t_stack *stack)
{
	int	i;
	int	n;

	i = stack->current_b;
	n = stack->stack_b[stack->current_b - 1];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = n;
	return (0);
	print_log_rr(2);
}

int	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
	print_log_rr(3);
	return (0);
}
