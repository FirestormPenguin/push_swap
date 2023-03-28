/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:35:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/03/28 18:27:08 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int main (int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	j;

	i = 1;
	j = 0;
	if(ac <= 2)
	{
		return (0);
	}
	while(av[i] != 0)
	{
		stack_a[j] = av[i];
	}
	j = 0;
	while(av[i] != 0)
	{
		printf("%d\n", stack_a[j]);
		j++;
	}

	return (0);
}