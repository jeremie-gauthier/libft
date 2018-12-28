/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 12:23:04 by jergauth          #+#    #+#             */
/*   Updated: 2018/12/28 20:23:55 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static void		print_decimal_part(char *s, unsigned short p)
{
	unsigned short	ret;
	unsigned short	ind;

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
	ft_putstr(s);
	ft_strdel(&s);
}

void			ft_putdouble(double d, unsigned short precision)
{
	long			l;
	unsigned short	p;
	char			*s;

	precision++;
	if ((s = (char*)malloc(sizeof(*s) * (precision + 1))))
	{
		if (d < 0)
			ft_putchar('-');
		l = (long)d;
		putlnbr_base(l, 10);
		d -= l;
		if (precision > 0)
		{
			ft_putchar('.');
			p = 0;
			while (p < precision)
			{
				d *= 10;
				l = (long)d;
				s[p++] = l + 48;
				d -= l;
			}
			s[p] = '\0';
			print_decimal_part(s, p);
		}
	}
}
void			ft_putdouble_no_calc(double d, unsigned short precision)
{
	long			l;
	unsigned short	p;
	char			*s;
	char			*sl;

	d = (long double)d;
//	double	tmp;

	precision++;
	if ((s = (char*)malloc(sizeof(*s) * (precision + 1))))
	{
		if (d < 0)
			ft_putchar('-');
		sl = ft_ltoa_base((long)d, 10);
		ft_putstr(sl);	
		if (precision > 0)
		{
			ft_putchar('.');
			p = 0;
		//		tmp = (float)((long)d);
		//		d -= tmp;
			while (p < precision)
			{
		//		if (p % 15 == 0)
		//			tmp = (float)((long)d);
				d *= 10;
				l = (long)d % 10;
				s[p++] = l % 10 + 48;
		//		if (p % 15 == 0)
		//			d -= tmp;
			}
			s[p] = '\0';
			print_decimal_part(s, p);
		}
	}
}


int		main(void)
{
	double d = 12;
	long double ld = 0;

	ft_putnbr(sizeof(d));
	ft_putchar('\n');
	ft_putnbr(sizeof(ld));
	ft_putchar('\n');


	ft_putdouble_no_calc(d / 7.0, 20);
	ft_putchar('\n');
	ft_putdouble(d / 7.0, 20);
	printf("\n%.20f\n", d / 7.0);
}

