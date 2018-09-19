/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwald <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:40:35 by dwald             #+#    #+#             */
/*   Updated: 2017/09/04 15:33:11 by dwald            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_unit_tests.h"

size_t		my_strlen(char const *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}