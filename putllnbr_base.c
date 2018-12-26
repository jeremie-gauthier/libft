/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putllnbr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 19:27:49 by jergauth          #+#    #+#             */
/*   Updated: 2018/12/26 19:34:17 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putllnbr_base(long long int n, int base)
{
	if (base > 1 && base <= 16)
	{
		if (n >= base)
			putnbr_base(n / base, base);
		(n % base) > 9 ? ft_putchar(n % base + 55) : ft_putchar(n % base + 48);
	}
}
