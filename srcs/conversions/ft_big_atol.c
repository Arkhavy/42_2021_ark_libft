/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_atol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:13:17 by ljohnson          #+#    #+#             */
/*   Updated: 2022/02/09 08:35:17 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_big_atol(const char *str)
{
	long	result;
	int		negative;
	int		a;

	negative = 1;
	result = 0;
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
		result = result * 10 + str[a] - '0';
		a++;
	}
	return (result * negative);
}
