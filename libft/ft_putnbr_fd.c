/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:54 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/13 11:59:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	int		l;

	l = 0;
	if (n == -2147483648)
	{
		l += write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		l += write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		l += ft_putnbr_fd(n / 10, fd);
	}
	digit = (n % 10) + '0';
	l += write(fd, &digit, 1);
	return (l);
}
