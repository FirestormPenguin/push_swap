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

int		ft_atoi(const char *str);
int		ft_count_av(char **str);
int		sa(t_stack *stack);
int		sb(t_stack *stack);
int		ss(t_stack *stack);
int		pa(t_stack *stack);
int		pb(t_stack *stack);