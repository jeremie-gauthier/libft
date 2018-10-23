#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	const char	*iter;

	iter = str;
	while (*iter)
		iter++;
	return (iter - str);
}
