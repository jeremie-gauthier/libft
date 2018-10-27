#include <stdlib.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 != *s2 && n > 0)
		return (0);
	return (1);
}
