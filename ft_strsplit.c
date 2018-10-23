#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	in_word;

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

char		**ft_strsplit(char const *s, char c)
{
	int		len;
	char	**tab;

	len = count_words(s, c);
	if (!(tab = (char*)malloc(sizeof(*tab) * (len + 1))))
		return (NULL);
	while (*tab)
	{
		while (*tab == c)
			tab++;
		//Utiliser strchr pour trouver le prochain "char c"
		//Coder un "ft_strndup" qui alloue la memoire et copie uniquement les n premiers chars
	}
}
