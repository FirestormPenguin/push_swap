/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:26:55 by marvin            #+#    #+#             */
/*   Updated: 2023/05/08 16:20:21 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	close_stacks(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
}

void	ft_error(t_stack *stack)
{
	write(2, "Error\n", 6);
	close_stacks(stack);
	exit(1);
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (ac < 2)
		return (0);
	else if (ac == 2)
	{
		d_quotes(stack, av[1]);
	}
	else if (ac > 2)
	{
		ft_malloc_stack(stack, av);
	}
	checks_dup(stack);
	if (stack_a_is_sorted(stack) == 1)
	{
		return (0);
	}
	sort_stack(stack);
	close_stacks(stack);
	return (0);
}
