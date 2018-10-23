#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(s);
	if (!(newstr = (char*)malloc(sizeof(*newstr) * (len + 1))))
		return (NULL);
	while (*s)
	{
		*newstr = f(*s);
		newstr++;
		s++;
	}
	*newstr = '\0';
	return (newstr - len);
}
