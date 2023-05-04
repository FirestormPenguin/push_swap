/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:56:24 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/04 18:12:31 by egiubell         ###   ########.fr       */
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
			if(str[i][j] < '0' || str[i][j] > '9')
				return(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checks_max_int(char **str)
{
	return (0);
}

int	checks_dup(char **str)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (str[i] != NULL)
	{
		if (str[j] == NULL)
			break;
		while (str[j] != NULL)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	checks_error(char **str)
{
	if (checks_int(str) == 1)
		return (1);
	if (checks_max_int(str) == 1)
		return (1);
	if (checks_dup(str) == 1)
		return (1);
	return (0);
}
