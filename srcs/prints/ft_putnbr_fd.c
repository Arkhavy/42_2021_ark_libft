/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:06:39 by ljohnson          #+#    #+#             */
/*   Updated: 2022/03/04 13:26:01 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_putnbr_fd(int n, int fd)
{
	long int	a;
	int			count;

	a = n;
	count = 0;
	if (a < 0)
	{
		count += ft_int_putchar_fd('-', fd);
		a = -a;
	}
	if (a > 9)
	{
		count += ft_int_putnbr_fd(a / 10, fd);
		a %= 10;
	}
	count += ft_int_putchar_fd(a + '0', fd);
	return (count);
}

int	ft_int_putnbr(int n)
{
	long int	a;
	int			count;

	a = n;
	count = 0;
	if (a < 0)
	{
		count += ft_int_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		count += ft_int_putnbr(a / 10);
		a %= 10;
	}
	count += ft_int_putchar(a + '0');
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	a;

	a = n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		a %= 10;
	}
	ft_putchar_fd(a + '0', fd);
}
