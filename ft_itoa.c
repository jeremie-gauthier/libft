#include "libft.h"

static unsigned int	ft_getlen(int nb, int *isneg)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
	{
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
