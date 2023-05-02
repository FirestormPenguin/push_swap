/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:26:55 by marvin            #+#    #+#             */
/*   Updated: 2023/05/02 16:33:59 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack		*stack;
	int	i;
	int	j;

	i = 1;
	j = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->count_a = ft_count_av(av);
	stack->count_b = stack->count_a;
	ft_printf("Numeri inseriti nella stack: %d\n\n", stack->count_a);
	if(ac <= 2)
	{
		printf("Numeri non sufficienti\n");
		return (0);
	}
	stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
	stack->current_a = stack->count_a;
	stack->current_b = 0;
	while(av[i] != NULL)
	{
		stack->stack_a[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	print_stack(stack);
	if (stack_A_is_sorted(stack) == 1)
	{
		printf ("Already sorted\n");	
		return (0);
	}
	sort_stack(stack);
	print_stack(stack);
	return (0);
}
