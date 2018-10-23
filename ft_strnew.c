#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
