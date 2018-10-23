char	*ft_strcpy(char *dest, const char *src)
{
	char	*iter;

	iter = dest;
	while (*src)
	{
		*iter = *src;
		src++;
		iter++;
	}
	*iter = '\0';
	return (dest);
}
