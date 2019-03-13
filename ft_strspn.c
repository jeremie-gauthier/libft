#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len;

	len = 0;
	if (s && accept)
	{
		while (*s)
		{
			if (ft_strchr(accept, *s) == NULL)
				return (len);
			len++;
			s++;
		}
	}
	return (len);
}
