#include "libft.h"

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	words;
	unsigned int	in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int		lentab;
	unsigned int		tmp;
	size_t				lenword;
	char				**tab;

	lentab = count_words(s, c);
	tmp = lentab;
	if (!(tab = (char**)malloc(sizeof(*tab) * (lentab + 1))))
		return (NULL);
	while (tmp--)
	{
		while (*s == c)
			s++;
		if (!ft_strchr(s, c))
			*tab = ft_strdup(s);
		else
		{
			lenword = ft_strchr(s, c) - s;
			*tab = ft_strndup(s, lenword);
		}
		tab++;
		s += lenword + 1;
	}
	*tab = '\0';
	return (tab - lentab);
}
