#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*trimmed;
	char const	*first;
	char const	*last;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return ("");
	first = s;
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			last = s;
		s++;
	}
	trimmed = ft_strndup(first, (last - first) + 1);
	return (trimmed);
}
