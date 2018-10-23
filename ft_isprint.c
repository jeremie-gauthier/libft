int		ft_isprint(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);	
	if (c >= '0' && c <= '9')
		return (4);
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) ||
		(c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (16);
	if (c == 32)
		return (128);
	return (0);
}
