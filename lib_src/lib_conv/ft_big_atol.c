/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_atol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:13:17 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:03:14 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_big_atol(const char *str)
{
	long	result;
	size_t	res;
	int		negative;
	int		a;

	negative = 1;
	res = 0;
	a = 0;
	while (str[a] && (ft_isspace(str[a]) || (str[a] >= 9 && str[a] <= 13)))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			negative = -negative;
		a++;
	}
	while (ft_isdigit(str[a]))
	{
		res = res * 10 + str[a] - '0';
		a++;
	}
	result = res * negative;
	return (result);
}
