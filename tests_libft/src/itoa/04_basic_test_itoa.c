/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_itoa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpriou <jpriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:19:50 by dwald             #+#    #+#             */
/*   Updated: 2017/11/26 15:33:47 by jpriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		basic_test_itoa04(void)
{
	if (my_strcmp(my_itoa(2147483647), ft_itoa(2147483647)))
		return (-1);
	else
		return (0);
}