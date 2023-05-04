/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:56:24 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/04 20:40:30 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void close_stacks(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
}

int checks_int(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != 45)
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checks_max_int(char **str)
{
	int		i;
	int		j;
	long 	tmp;

	i = 1;
	j = 0;
	while(str[i] != NULL)
	{
		tmp = ft_atoi(str[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (1);
		i++;
	}		
	return (0);
}

void	checks_dup(t_stack *stack)
{
	int	i;
	int	j;
	
	i = -1;
	while (++i < stack->count_a)
	{
		j = i;
		while (++j < stack->count_a)
		{
			if (stack->stack_a[i] == stack->stack_a[j])
				ft_error(stack);
		}
	}
}

int	checks_error(char **str)
{
	if (checks_int(str) == 1)
		return (1);
	if (checks_max_int(str) == 1)
		return (1);
	return (0);
}
