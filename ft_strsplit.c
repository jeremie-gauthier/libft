#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	in_word;

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

static char		*ft_strcdup(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	if (!(dup = (char*)malloc(sizeof(*dup) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	lentab;
	char	**tab;

	i = 0;
	lentab = count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(*tab) * (lentab + 1))))
		return (NULL);
	while (i < lentab)
	{
		while (*s == c)
			s++;
		tab[i] = ft_strcdup(s, c);
		while (*s != c)
			s++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
