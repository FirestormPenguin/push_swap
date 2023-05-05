#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf/ft_printf.h"
#include "ft_printf/libft.h"

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
int 	stack_A_is_sorted(t_stack *stack);
void	d_quotes(t_stack *stack, char *str);
void	ft_error(t_stack *stack);

int		checks_error(char **str);
void	close_stacks(t_stack *stack);
int		checks_int(char **str);
void	checks_dup(t_stack *stack);

void	sort_stack(t_stack *stack);
void	sort3(t_stack *stack);
int		find_sort3(t_stack *stack);
void	sort_big_stack(t_stack *stack);
void	push_to_b(t_stack *stack);
int		find_min_a(t_stack *stack);
