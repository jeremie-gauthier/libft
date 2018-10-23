int		ft_atoi(const char *str)
{
	int	res;
	int	isneg;

	res = 0;
	isneg = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		isneg++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (isneg ? -res : res);
}
