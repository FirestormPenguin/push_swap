/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:33:37 by egiubell          #+#    #+#             */
/*   Updated: 2023/04/28 17:08:22 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->current_a > 3)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			
	}
	sort_small_stack(stack);
}
