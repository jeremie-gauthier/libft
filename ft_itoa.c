#include "libft.h"

static unsigned int	ft_getlen(int nb, int *isneg)
{
	unsigned int	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			nb = -147483648;
			len++;
		}
		nb = -nb;
		*isneg = 1;
	}
	else
		*isneg = 0;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	len;
	int				isneg;
	char			*str;

	len = ft_getlen(n, &isneg);
	if (!(str = (char*)malloc(sizeof(*str) * (len + isneg + 1))))
		return (NULL);
	if (n == -2147483648)
		return (str = "-2147483648\0");
	if (n == 0)
		return (str = "0\0");
	if (isneg)
	{
		*str++ = '-';
		n = -n;
	}
	while (n)
	{
		*str++ = (n % 10) + 48;
		n /= 10;
	}
	*str = '\0';
	str -= len;
	ft_strrev(str);
	return (str - isneg);
}
