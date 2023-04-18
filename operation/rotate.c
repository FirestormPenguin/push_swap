/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:27:01 by codespace         #+#    #+#             */
/*   Updated: 2023/04/18 17:08:50 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ra(t_stack *stack)
{
    int i;
    int n;

    i = 0;
    n = stack->stack_a[0];
    while(i < stack->current_a - 1)
    {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[i] = n;
    return (0);
}

int rb(t_stack *stack)
{
    int i;
    int n;

    i = 0;
    n = stack->stack_b[0];
    while(i < stack->current_b - 1)
    {
        stack->stack_b[i] = stack->stack_b[i + 1];
        i++;
    }
    stack->stack_b[i] = n;
    return (0);
}

int rr(t_stack *stack)
{
    ra(stack);
    rb(stack);
    return (0);
}