#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		n = 147483648;
		ft_putstr("-2");
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
