/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:35:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/03/30 17:47:36 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int test(t_stack *stack)
{
	stack->count_a = stack->count_a - 1;
	printf("%d\n", stack->count_a);
	return (0);
}

int main (int ac, char **av)
{
	t_stack		*stack;
	int	i;
	int	j;

	i = 1;
	j = 0;
	stack = malloc(sizeof(t_stack));
	stack->count_a = ft_count_av(av);
	printf("Numeri inseriti nella stack: %d\n\n", stack->count_a);
	
	if(ac <= 2)
	{
		return (0);
	}
	stack->stack_a = malloc(sizeof(int) * stack->count_a);
	stack->stack_b = malloc(sizeof(int) * stack->count_a);

	while(av[i] != '\0')
	{
		stack->stack_a[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	j = 0;
	while(j < stack->count_a)
	{
		printf("%d	 \n", stack->stack_a[j]);
		j++;
	}
	printf("-	-\n");
	printf("A:	B:\n");
	
	test(stack);

	return (0);
}
