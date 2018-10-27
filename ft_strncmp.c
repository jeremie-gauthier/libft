#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n--)
	{
		if ((unsigned char) *s1 - (unsigned char) *s2 < 0)
			return (-1);
		else if ((unsigned char) *s1 - (unsigned char) *s2 > 0)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
