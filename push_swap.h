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

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);
int		ft_count_av(char **str);
int		sa(t_stack *stack);
int		sb(t_stack *stack);
int		ss(t_stack *stack);
