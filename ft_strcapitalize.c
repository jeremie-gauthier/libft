#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int		in_word;
	char	*str;

	in_word = 0;
	str = s;
	while (*str)
	{
		if (ft_isalpha(*str) && in_word == 0)
		{
			if (ft_islower(*str))
				*str -= 32;
			in_word = 1;
		}
		else if (ft_isalpha(*str) && in_word)
		{
			if (ft_isupper(*str))
				*str += 32;
		}
		else
			in_word = 0;
		str++;
	}
	return (s);
}
