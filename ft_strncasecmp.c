#include "libft.h"

int		ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	char	*a;
	char	*b;

	a = ft_strdup(s1);
	b = ft_strdup(s2);
	a = ft_strlowcase(a);
	b = ft_strlowcase(b);
	return (ft_strncmp(a, b, n));
}
