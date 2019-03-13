#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;

	len = 0;
	if (s && reject)
	{
		while (*s && !ft_strchr(reject, *s))
		{
			len++;
			s++;
		}
	}
	return (len);
}
