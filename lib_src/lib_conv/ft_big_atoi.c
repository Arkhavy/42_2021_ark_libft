/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:08:35 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/18 13:17:07 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

int	ft_big_atoi(const char *str)
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
