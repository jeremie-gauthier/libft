/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:05:14 by jergauth          #+#    #+#             */
/*   Updated: 2019/02/13 11:05:16 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_del(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*current;

	current = *head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		tmp = NULL;
	}
	head = NULL;
}
