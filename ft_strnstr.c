#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (0 == (len = ft_strlen(s2)))
		return ((char*) s1);
	if (len - 1 >= n)
		return (0);
	while (*s1 && (n - (len - 1)) > 0)
	{
		if (*s1 == *s2)
			if (!ft_strncmp(s1, s2, len - 1))
				return ((char*) s1);
		s1++;
		n--;
	}
	return (0);
}
