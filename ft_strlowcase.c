#include "libft.h"

char	*ft_strlowcase(char *s)
{
	char	*str;

	str = s;
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (s);
}
