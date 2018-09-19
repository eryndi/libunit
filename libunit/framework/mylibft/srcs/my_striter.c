/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwald <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:38:29 by dwald             #+#    #+#             */
/*   Updated: 2016/12/07 17:32:26 by dwald            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_unit_tests.h"

void	my_striter(char *s, void (*f)(char *))
{
	if (s && *f)
	{
		while (*s)
			(*f)(s++);
	}
}