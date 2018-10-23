#include <stdlib.h>

void	*ft_memcpy(void *str1, void const *str2, size_t n)
{
	char		*pstr1;
	const char	*pstr2;

	pstr1 = str1;
	pstr2 = str2;
	while (*pstr2 && n-- > 0)
		*pstr1++ = *pstr2++;
	return (str1);
}
