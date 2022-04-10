/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:01:20 by ljohnson          #+#    #+#             */
/*   Updated: 2022/03/04 13:54:29 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_putptr_base_fd(unsigned long long nbr, char *base, int fd)
{
	int					count;
	unsigned long long	hexptr;
	size_t				baselen;

	count = 0;
	hexptr = nbr;
	baselen = ft_strlen(base);
	if (hexptr >= baselen)
		count += ft_int_putptr_base_fd(hexptr / baselen, base, fd);
	count += ft_int_putchar_fd(base[hexptr % baselen], fd);
	return (count);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
