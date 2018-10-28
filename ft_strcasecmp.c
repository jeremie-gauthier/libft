#include "libft.h"

int		ft_strcasecmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			if (ft_isalpha(*s1) == ft_isalpha(*s2))
			{
				if (*s1 - 32 != *s2 && *s1 + 32 != *s2)
					return (0);
			}
			else
				return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}
