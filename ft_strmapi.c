#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	char	*sdup;
	size_t	len;

	sdup = ft_strdup(s);
	len = ft_strlen(s);
	if (!(ret = (char*)malloc(sizeof(*ret) * (len + 1))))
		return (NULL);
	while (*sdup)
	{
		*ret = f(sdup - s, *sdup);
		ret++;
		sdup++;
	}
	*ret = '\0';
	return (ret - len);
}
