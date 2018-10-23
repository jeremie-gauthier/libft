#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = ft_strnew(sizeof(*ret) * len);
	if (!ret)
		return (NULL);
	s += start;
	ret = ft_strncpy(ret, s, sizeof(*ret) * len);
	return (ret);
}
