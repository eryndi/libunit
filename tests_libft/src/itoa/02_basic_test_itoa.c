/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_itoa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpriou <jpriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:19:50 by dwald             #+#    #+#             */
/*   Updated: 2017/11/26 15:33:29 by jpriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_libft.h"

int		basic_test_itoa02(void)
{
	if (my_strcmp(my_itoa(1), ft_itoa(1)))
		return (-1);
	else
		return (0);
}
