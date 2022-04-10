/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:33:19 by ljohnson          #+#    #+#             */
/*   Updated: 2022/03/04 13:55:00 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_putptr_fd(unsigned long long nbr, int fd)
{
	int	count;

	count = 0;
	count += ft_int_putstr_fd("0x", fd);
	count += ft_int_putptr_base_fd(*(unsigned long long *)&nbr, LOWERHEX, fd);
	return (count);
}

static int	ft_int_putptr_base(unsigned long long nbr, char *base)
{
	int					count;
	unsigned long long	hexptr;
	size_t				baselen;

	count = 0;
	hexptr = nbr;
	baselen = ft_strlen(base);
	if (hexptr >= baselen)
		count += ft_int_putptr_base(hexptr / baselen, base);
	count += ft_int_putchar(base[hexptr % baselen]);
	return (count);
}

int	ft_int_putptr(unsigned long long nbr)
{
	int	count;

	count = 0;
	count += ft_int_putstr("0x");
	count += ft_int_putptr_base(*(unsigned long long *)&nbr, LOWERHEX);
	return (count);
}

static void	ft_putptr_base_fd(unsigned long long nbr, char *base, int fd)
{
	unsigned long long	hexptr;
	size_t				baselen;

	hexptr = nbr;
	baselen = ft_strlen(base);
	if (hexptr >= baselen)
		ft_putptr_base_fd(hexptr / baselen, base, fd);
	ft_putchar_fd(base[hexptr % baselen], fd);
}

void	ft_putptr_fd(unsigned long long nbr, int fd)
{
	ft_putstr_fd("0x", fd);
	ft_putptr_base_fd(*(unsigned long long *)&nbr, LOWERHEX, fd);
}
