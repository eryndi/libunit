/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwald <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:00:11 by dwald             #+#    #+#             */
/*   Updated: 2016/12/14 12:37:43 by dwald            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_unit_tests.h"

void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
