#include "libft.h"

char	*ft_strupcase(char *s)
{
	char	*str;

	str = s;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (s);
}
