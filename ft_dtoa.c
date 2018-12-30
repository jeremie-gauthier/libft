/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 13:35:24 by jergauth          #+#    #+#             */
/*   Updated: 2018/12/30 13:35:25 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*print_decimal_part(char *s, unsigned short p)
{
	unsigned short	ret;
	unsigned short	ind;

	s[p] = '\0';
	ret = 1;
	while (1)
	{
		ind = p - (ret + 1);
		if (s[p - ret] >= '5')
		{
			if (s[ind] + 1 != 58)
			{
				s[ind] += 1;
				break ;
			}
			else if (s[ind] + 1 == 58)
				s[ind] = '0';
			ret++;
		}
		else
			break ;
	}
	s[p - 1] = '\0';
	return (s);
}

static char		*fill_str(double d, unsigned short precision, char *s)
{
	char			*s2;
	char			*ptr;
	long			l;
	unsigned short	p;

	if (precision > 0)
	{
		if (!(s2 = (char*)malloc(sizeof(*s2) * (precision + 3))))
			return (NULL);
		p = 0;
		s2[p++] = '.';
		while (p < precision + 2)
		{
			d *= 10;
			l = (long)d;
			s2[p++] = l + 48;
			d -= l;
		}
		print_decimal_part(s2, p);
	}
	ptr = s;
	s = ft_strjoin(s, s2);
	ft_strdel(&ptr);
	ft_strdel(&s2);
	return (s);
}

char			*ft_dtoa(double d, unsigned short precision)
{
	long			l;
	char			*s;

	l = (long)d;
	s = ft_ltoa_base(l, 10);
	d -= l;
	s = fill_str(d, precision, s);
	return (s);
}
