/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:26:55 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 17:26:43 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack		*stack;\
	int	i;
	int	j;

	i = 1;
	j = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (ac < 2)
		return (0);
	else if(ac == 2)
	{
		d_quotes(stack, av[1]);
		if (checks_error(av) == 1)
		{
			ft_printf("Error\n");
			close_stacks(stack);
			return (0);
		}
	}
	else if (ac > 2)
	{
		stack->count_a = count_av(av);
		stack->count_b = stack->count_a;
		stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
		stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
		stack->current_a = stack->count_a;
		stack->current_b = 0;
		if (checks_error(av) == 1)
		{
			ft_printf("Error\n");
			close_stacks(stack);
			return (0);
		}
		while(av[i] != NULL)
		{
			stack->stack_a[j] = ft_atoi(av[i]);
			i++;
			j++;
		}
	}
	print_stack(stack);
	if (stack_A_is_sorted(stack) == 1)
	{
		return (0);
	}
	sort_stack(stack);
	print_stack(stack);
	close_stacks(stack);
	return (0);
}
