#include "rpn_calc.h"
#include "/Users/jergauth/Documents/libft/libft.h"

t_stack	*create_elem(int nb)
{
	t_stack	*new;

	if (!(new = (t_stack*)malloc(sizeof(*new))))
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}

void	free_stack(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*current;

	current = *head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		tmp = NULL;
	}
	head = NULL;
}

void	destack(t_stack **current)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i < 2)
	{
		tmp = *current;
		*current = (*current)->next;
		ft_memdel((void*)&tmp);
		i++;
	}
}

void	push_stack(t_stack **elem, t_stack *new)
{
	t_stack	*tmp;


	if (elem == NULL && *elem == NULL)
	{
		*elem = new;
	}
	else
	{
		tmp = *elem;
		*elem = new;
		new->next = tmp;
	}
}

void	manage_stack(t_stack **elem, int nb)
{
	t_stack	*operand;

	operand = create_elem(nb);
	push_stack(elem, operand);
}

int		operations(int a, int b, char c, int *ret)
{
	if (c == '+')
		*ret = a + b;
	else if (c == '-')
		*ret = a - b;
	else if (c == '*')
		*ret = a * b;
	else if (c == '/')
	{
		if (b == 0)
			return (0);
		*ret = a / b;
	}
	else if (c == '%')
	{
		if (b == 0)
			return (0);
		*ret = a % b;
	}
	return (1);
}

void	show_stack(t_stack *current)
{
	printf("\nDEBUT STACK\n");
	while (current)
	{
		printf("%i\n", current->nb);
		current = current->next;
	}
	printf("NULL\n\n");
}

int		check(char *str)
{
	if (*str == ' ')
		return (0);
	while (*str)
	{
		if (*str != '+' && *str != '-' && *str != '*' && *str != '/'
					&& *str != '%' && *str != ' ' && (*str < '0' || *str > '9'))
			return (0);
		str++;
	}
	return (1);
}

int		parsing(char *str)
{
	t_stack	*current;
	int	ret;

	current = NULL;
	if (check(str) == 0)
	{
		printf("Error\n");
		return (0);
	}
	while (*str)
	{
		while (*str && *str == ' ')
			str++;
		if ((*str >= '0' && *str <= '9') || (*str == '-' && *(str + 1) >= '0' && *(str + 1) <= '9'))
		{
			manage_stack(&current, atoi(str));
			if (*str == '+' || *str == '-')
				str++;
			while (*str && *str >= '0' && *str <= '9')
				str++;
		}
		else if (*str && (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%'))
		{
			if (current && current->next)
			{
				if ((operations(current->next->nb, current->nb, *str, &ret)) == 0)
				{
					printf("Error\n");
					free_stack(&current);
					return (0);
				}
				destack(&current);
				manage_stack(&current, ret);
				str++;
			}
			else
			{
				printf("Error\n");
				free_stack(&current);
				return (0);
			}
		}
		else
			str++;
	}
	if (current == NULL || current->next != NULL)
		printf("Error\n");
	else
		printf("%i\n", ret);
	free_stack(&current);
	return (ret);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		parsing(argv[1]);
	}
	else
		printf("Error\n");
	return (0);
}