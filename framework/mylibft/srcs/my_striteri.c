/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwald <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:12:41 by dwald             #+#    #+#             */
/*   Updated: 2016/12/07 14:56:55 by dwald            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_unit_tests.h"

void	my_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (f && s)
	{
		while (*s)
			(*f)(i++, s++);
	}
}
