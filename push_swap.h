#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack {
	int	a;
	int	b;
	struct t_stack	*next;
}		t_stack;