/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:05:36 by marvin            #+#    #+#             */
/*   Updated: 2023/04/18 17:08:31 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rra(t_stack *stack)
{
    int i;
    int n;

    i = stack->current_a;
    n = stack->stack_a[stack->current_a - 1];
    while(i > 0)
    {
        stack->stack_a[i] = stack->stack_a[i - 1];
        i--;
    }
    stack->stack_a[i] = n;
    return (0);
}

int rrb(t_stack *stack)
{
    int i;
    int n;

    i = stack->current_b;
    n = stack->stack_b[stack->current_b - 1];
    while(i > 0)
    {
        stack->stack_b[i] = stack->stack_b[i - 1];
        i--;
    }
    stack->stack_b[i] = n;
    return (0);
}

int rrr(t_stack *stack)
{
    rra(stack);
    rrb(stack);
    return (0);
}