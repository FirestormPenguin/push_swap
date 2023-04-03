/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:03:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/03 03:39:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	ft_count_av(char **str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}		
	return (i-1);
}

int	print_stack(t_stack *stack)
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
	return (0);
}
