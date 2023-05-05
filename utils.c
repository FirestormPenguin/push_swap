/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:03:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/05 16:51:31 by egiubell         ###   ########.fr       */
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

void print_stack(t_stack *stack)
{
	int i;

	i = 0;
	ft_printf("A: ");
	while(i < stack->current_a)
	{
		ft_printf("%d ", stack->stack_a[i]);
		i++;
	}
	ft_printf("\n");
	ft_printf("B: ");
	i = 0;
	while(i < stack->current_b)
	{
		ft_printf("%d ",stack->stack_b[i]);
		i++;
	}
	ft_printf("\n");
}

int stack_A_is_sorted (t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stack->current_a - 1)
	{
		if (stack->stack_a[i] < stack->stack_a[i + 1])
			j++;
		i++;
	}
	if (j == stack->current_a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
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
