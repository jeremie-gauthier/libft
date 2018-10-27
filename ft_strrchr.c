#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*rchr;

	rchr = NULL;
	while (*s)
	{
		if (*s == c)
			rchr = s;
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return ((char*) rchr);
}
