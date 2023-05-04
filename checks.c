/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:56:24 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/04 17:36:50 by egiubell         ###   ########.fr       */
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


int	checks_error(char **str)
{
	if (checks_int(str) == 1)
		return (1);
	
	return (0);
}
