/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:23:41 by egiubell          #+#    #+#             */
/*   Updated: 2023/03/30 19:55:01 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//int	pa(t_stack *stack)

int	pb(t_stack *stack)
{
	int i;
	i = 0;
	
	if (stack->current_b == 0)
	{
		stack->stack_b[0] = stack->stack_a[0];
		while(i <= stack->current_a)
		{
			stack->stack_a[i] = stack->stack_a[i+1];
			i++;
		}
		stack->stack_a[i] = '\0';
		stack->current_a -= 1;
		stack->current_b += 1;
	}
	return (0);
}

