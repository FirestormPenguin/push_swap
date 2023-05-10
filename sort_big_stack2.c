/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:27:10 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/10 18:35:58 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a_section_of_the_stack(long *array, int *stack_size)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < stack_size[0])
	{
		j = i + 1;
		while (j < stack_size[0])
		{
			if (array[i] > array[j])
			{
				temporary = array[i];
				array[i] = array[j];
				array[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

void	swap_stack_a_first(long *copy, long *copy_swap_stack_a, long *stack_a, int *stack->current_a
	int	i;

	i = 0;
	while (i < stack->current_a)
	{
		copy[i] = stack_a[i];
		copy_swap_stack_a[i] = stack_a[i];
		i++;
	}
}

void	swap_stack_a_second(long *copy, long *copy_swap_stack_a, long *stack_a, int *stack->current_a
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->current_a)
	{
		j = 0;
		while (j < stack->current_a)
		{
			if (copy_swap_stack_a[i] == copy[j])
					stack_a[i] = j;
			j++;
		}
		++i;
	}
}

void	swap_stack_a_third(long *stack_a, long *stack_b, int *stack->count_ant *numbers_in_stack_b)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = stack->current_a - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < stack->current_a)
		{
			if (((stack_a[0] >> loop_through[0]) & 1) == 1)
				rotate_stack_a(stack_a, stack->current_a			else
				push_stack_b(stack_a, stack_b, stack->count_aumbers_in_stack_b);
			++loop_through[1];
		}
		while (*numbers_in_stack_b != 0)
			push_stack_a(stack_a, stack_b, stack->count_aumbers_in_stack_b);
		++loop_through[0];
	}
}

void	sort_big_stack2(t_stack *stack)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(stack->current_a * sizeof(long));
	copy_swap_stack_a = (long *)malloc(stack->current_a * sizeof(long));
	swap_stack_a_first(copy, copy_swap_stack_a, stack);
	sort_a_section_of_the_stack(copy, stack->current_a);
	swap_stack_a_second(copy, copy_swap_stack_a, stack_a, stack->current_a);
	free(copy);
	free(copy_swap_stack_a);
	swap_stack_a_third(stack_a, stack_b, stack->count_aumbers_in_stack_b);
}
