/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:56:24 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/08 16:22:08 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checks_int_av(char **str, t_stack *stack)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if ((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != 45)
				ft_error(stack);
			j++;
		}
		i++;
	}
}

void	checks_max_int_av(char **str, t_stack *stack)
{
	int		i;
	long	tmp;

	i = 1;
	while (str[i] != NULL)
	{
		tmp = ft_atoi(str[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error(stack);
		i++;
	}		
}

void	checks_int(char **str, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if ((str[i][j] < '0' || str[i][j] > '9') && str[i][j] != 45)
				ft_error(stack);
			j++;
		}
		i++;
	}
}

void	checks_max_int(char **str, t_stack *stack)
{
	int		i;
	long	tmp;

	i = 0;
	while (str[i] != NULL)
	{
		tmp = ft_atoi(str[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error(stack);
		i++;
	}		
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
