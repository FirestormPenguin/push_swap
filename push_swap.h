#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int		ft_atoi(const char *str);
int		ft_count_av(char **str);
int		print_stack(t_stack *stack);

void	sort_small_stack(t_stack *stack);
void	sort3(t_stack *stack);
int		find_sort3(t_stack *stack);
void	sort5(t_stack *stack);
