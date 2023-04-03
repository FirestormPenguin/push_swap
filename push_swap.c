/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:26:55 by marvin            #+#    #+#             */
/*   Updated: 2023/04/03 06:26:55 by marvin           ###   ########.fr       */
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
	printf("Numeri inseriti nella stack: %d\n\n", stack->count_a);
	
	if(ac <= 2)
	{
		return (0);
	}
	stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
	stack->current_a = stack->count_a;
	stack->current_b = 0;
	while(av[i] != '\0')
	{
		stack->stack_a[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	j = 0;
	printf("\n");
	printf("A: ");
	while(j < stack->current_a)
	{
		printf("%d ", stack->stack_a[j]);
		j++;
	}
	printf("\n");
	printf("B: ");
	while(j < stack->current_b)
	{
		printf("%d ",stack->stack_b[j]);
		j++;
	}
	
	pb(stack);
	j = 0;
	printf("\n");
	printf("\n");
	printf("A: ");
	while(j < stack->current_a)
	{
		printf("%d ", stack->stack_a[j]);
		j++;
	}
	printf("\n");
	printf("B: ");
	j = 0;
	while(j < stack->current_b)
	{
		printf("%d ",stack->stack_b[j]);
		j++;
	}
	printf("\n");
	
	return (0);
}
