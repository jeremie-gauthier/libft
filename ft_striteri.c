void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*p;

	p = s;
	while (*p)
	{
		f(p - s, p);
		p++;
	}
}
