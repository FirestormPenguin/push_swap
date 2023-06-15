/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:43:59 by egiubell          #+#    #+#             */
/*   Updated: 2023/05/10 18:28:33 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./mini-libft/libft.h"
# include "./mini-libft/ft_printf/ft_printf.h"
# include "./mini-libft/get_next_line/get_next_line.h"

typedef struct s_stack {
	int	*stack_a;
	int	*stack_b;
	int	count_a;
	int	count_b;
	int	current_a;
	int	current_b;
}		t_stack;

int		sa(t_stack *stack);
int		sb(t_stack *stack);
int		ss(t_stack *stack);

int		pa(t_stack *stack);
int		pb(t_stack *stack);

int		ra(t_stack *stack);
int		rb(t_stack *stack);
int		rr(t_stack *stack);

int		rra(t_stack *stack);
int		rrb(t_stack *stack);
int		rrr(t_stack *stack);

int		count_av(char **str);
void	print_stack(t_stack *stack);
int		stack_a_is_sorted(t_stack *stack);
void	ft_malloc_stack(t_stack *stack, char **str);
void	d_quotes(t_stack *stack, char *str);

void	close_stacks(t_stack *stack);
void	ft_error(t_stack *stack);

void	checks_max_int(char **str, t_stack *stack);
void	checks_int_av(char **str, t_stack *stack);
void	checks_int(char **str, t_stack *stack);
void	checks_max_int_av(char **str, t_stack *stack);
void	checks_dup(t_stack *stack);

void	sort_stack(t_stack *stack);
void	sort3(t_stack *stack);
int		find_sort3(t_stack *stack);
void	sort_big_stack(t_stack *stack);
void	push_to_b(t_stack *stack);
int		find_min_a(t_stack *stack);
int		find_min_b(t_stack *stack);

void	sort_big_stack2(t_stack *stack);

#endif
