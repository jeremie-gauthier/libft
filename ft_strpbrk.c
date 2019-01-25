/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:46:47 by jergauth          #+#    #+#             */
/*   Updated: 2019/01/25 15:50:32 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *s, const char *accept)
{
	while (*s)
	{
		if (ft_strchr(accept, *s))
			return ((char*)s);
		s++;
	}
	if (ft_strchr(accept, *s))
		return ((char*)s);
	return (NULL);
}
