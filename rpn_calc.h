#ifndef RPN_CALC_H
# define RPN_CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}				t_stack;

#endif