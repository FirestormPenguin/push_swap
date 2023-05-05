/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:07:14 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/05 18:23:27 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void print_log_s(int n)
{
    if (n == 1)
        ft_printf("sa\n");
    else if (n == 2)
        ft_printf("sb\n");
    else if (n == 3)
        ft_printf("ss\n");
}

int	sa(t_stack *stack)
{
	int n;
	if(stack->count_a <= 1)
		return(0);
	n = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = n;
	print_log_s(1);
	return (0);
}

int	sb(t_stack *stack)
{
	int n;
	if(stack->count_b <= 1)
		return(0);
	n = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = n;
	print_log_s(2);
	return (0);
}

int	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	print_log_s(3);
	return(0);
}
