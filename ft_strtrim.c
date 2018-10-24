#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char		*trimmed;
	char const	*firstchar;
	char const	*lastchar;
	size_t		len;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	firstchar = s;
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			lastchar = s;
		s++;
	}
	len = lastchar - firstchar;
	if (!(trimmed = (char*)malloc(sizeof(*trimmed) * (len + 1))))
		return (NULL);
	while (firstchar <= lastchar)
	{
		*trimmed = *firstchar;
		trimmed++;
		firstchar++;
	}
	*trimmed = '\0';
	return (trimmed - (len + 1));
}
