/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:27:01 by codespace         #+#    #+#             */
/*   Updated: 2023/04/03 03:34:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ra(t_stack *stack)
{
    int i;
    int n;

    i = 0;
    n = stack->stack_a[0];
    while(i < stack->current_a)
    {
        stack->stack_a[i] = stack->stack_a[i + 1];
        i++;
    }
    stack->stack_a[i + 1] = n;
    return (0);
}
