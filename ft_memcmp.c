#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	while (*p1 == *p2 && n--)
	{
		p1++;
		p2++;
	}
	if (*p1 - *p2 < 0)
		return (-1);
	else if (*p1 - *p2 > 0)
		return (1);
	return (0);
}
