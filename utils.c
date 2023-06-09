/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:03:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/06/15 13:51:47 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_av(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		i++;
	}		
	return (i - 1);
}

void	print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	printf("A: ");
	while (i < stack->current_a)
	{
		printf("%d ", stack->stack_a[i]);
		i++;
	}
	printf("\n");
	printf("B: ");
	i = 0;
	while (i < stack->current_b)
	{
		printf ("%d ", stack->stack_b[i]);
		i++;
	}
	printf("\n");
}

int	stack_a_is_sorted(t_stack *stack)
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
		return (1);
	else
		return (0);
}

void	ft_malloc_stack(t_stack *stack, char **str)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	stack->count_a = count_av(str);
	stack->count_b = stack->count_a;
	stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
	stack->current_a = stack->count_a;
	stack->current_b = 0;
	while (str[i] != NULL)
	{
		stack->stack_a[j] = ft_atoi(str[i]);
		i++;
		j++;
	}
	checks_int_av(str, stack);
	checks_max_int_av(str, stack);
}

void	d_quotes(t_stack *stack, char *str)
{
	char	**s;
	int		i;

	i = 0;
	s = ft_split(str, ' ');
	stack->count_a = count_av(s) + 1;
	stack->count_b = stack->count_a;
	stack->stack_a = (int *)malloc(sizeof(int) * stack->count_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->count_a);
	stack->current_a = stack->count_a;
	stack->current_b = 0;
	while (s[i] != NULL)
	{
		stack->stack_a[i] = ft_atoi(s[i]);
		i++;
	}
	checks_int(s, stack);
	checks_max_int(s, stack);
	i = -1;
	while (s[++i])
	{
		free(s[i]);
	}
	free(s);
}
