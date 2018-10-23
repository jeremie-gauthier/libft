char	*ft_strrchr(const char *s, int c)
{
	const char	*rchr;

	rchr = 0;
	while (*s)
	{
		if (*s == c)
			rchr = s;
		s++;
	}
	return ((char*) rchr);
}
