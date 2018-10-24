#include "libft.h"

void	ft_strrev(char *s)
{
	char	*end;

	end = s + (ft_strlen(s) - 1);
	while (s < end)
	{
		*s ^= *end;
		*end ^= *s;
		*s ^= *end;
		s++;
		end--;
	}
}
