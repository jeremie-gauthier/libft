char	*ft_strcat(char *dest, const char *src)
{
	char	*iter;

	iter = dest;
	while (*iter)
		iter++;
	while (*src)
	{
		*iter = *src;
		src++;
		iter++;
	}
	*iter = '\0';
	return (dest);
}
