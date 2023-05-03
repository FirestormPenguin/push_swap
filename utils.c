/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:03:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/27 17:26:27 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_av(char **str)
{
	int	i;

	i = 0;
	while(str[i] != NULL)
	{
		i++;
	}		
	return (i-1);
}

void	print_stack(t_stack *stack)
{
	int i;

	i = 0;
	printf("A: ");
	while(i < stack->current_a)
	{
		printf("%d ", stack->stack_a[i]);
		i++;
	}
	printf("\n");
	printf("B: ");
	i = 0;
	while(i < stack->current_b)
	{
		printf("%d ",stack->stack_b[i]);
		i++;
	}
	printf("\n");
}

void d_quotes(t_stack *stack, char *str)
{
	char	**s;
	int		i;

	i = 0;
	s = (char **)malloc(sizeof(char *) * (count_split(str, ' ') + 1));
	s = ft_split(str, ' ');
	stack->count_a = count_av(s) + 1;
	stack->count_b = stack->count_a;
	stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
	stack->current_a = stack->count_a;
	stack->current_b = 0;
	while(s[i] != NULL)
	{
		stack->stack_a[i] = ft_atoi(s[i]);
		i++;
	}
}
