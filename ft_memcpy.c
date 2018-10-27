#include <stdlib.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*pstr1;
	char const	*pstr2;

	pstr1 = (char*)str1;
	pstr2 = (const char*)str2;
	while (n--)
		*pstr1++ = *pstr2++;
	return (str1);
}
