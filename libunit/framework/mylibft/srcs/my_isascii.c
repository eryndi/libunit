/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwald <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:07:50 by dwald             #+#    #+#             */
/*   Updated: 2016/11/25 16:10:10 by dwald            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_unit_tests.h"

int		my_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
