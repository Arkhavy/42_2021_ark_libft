/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:31:20 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/10 08:44:34 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_int_putnbr_base_fd(unsigned int nbr, char *base, int fd)
{
	int				count;
	unsigned int	hexnb;
	size_t			baselen;

	count = 0;
	hexnb = nbr;
	baselen = ft_strlen(base);
	if (hexnb >= baselen)
		count += ft_int_putnbr_base_fd(hexnb / baselen, base, fd);
	count += ft_int_putchar(base[hexnb % baselen]);
	return (count);
}

int	ft_int_putnbr_base(unsigned int nbr, char *base)
{
	int				count;
	unsigned int	hexnb;
	size_t			baselen;

	count = 0;
	hexnb = nbr;
	baselen = ft_strlen(base);
	if (hexnb >= baselen)
		count += ft_int_putnbr_base(hexnb / baselen, base);
	count += ft_int_putchar(base[hexnb % baselen]);
	return (count);
}

void	ft_putnbr_base_fd(unsigned int nbr, char *base, int fd)
{
	unsigned int	hexnb;
	size_t			baselen;

	hexnb = nbr;
	baselen = ft_strlen(base);
	if (hexnb >= baselen)
		ft_putnbr_base_fd(hexnb / baselen, base, fd);
	ft_putchar_fd(base[hexnb % baselen], fd);
}
