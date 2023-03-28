/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:35:46 by egiubell          #+#    #+#             */
/*   Updated: 2023/03/28 18:57:19 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	j;
	int	count_a;

	i = 1;
	j = 0;
	count_a = ft_count_av(av);
	printf("Numeri inseriti nella stack: %d\n\n", count_a);
	
	if(ac <= 2)
	{
		return (0);
	}
	stack_a = malloc(sizeof(int) * count_a);
	stack_b = ft_calloc(sizeof(int), count_a);

	while(av[i] != '\0')
	{
		stack_a[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	j = 0;
	while(j < count_a)
	{
		printf("%d	%d\n", stack_a[j], stack_b[j]);
		j++;
	}
	printf("-	-\n");
	printf("A:	B:\n");

	return (0);
}
