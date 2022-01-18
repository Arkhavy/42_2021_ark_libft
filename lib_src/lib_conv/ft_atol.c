/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:52:09 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/04 14:53:48 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

long	ft_atol(const char *str)
{
	long	result;
	size_t	res;
	int		negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -negative;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (res > LONG_MAX && negative == -1)
		return (0);
	else if (res > LONG_MAX && negative == 1)
		return (-1);
	result = res * negative;
	return (result);
}
