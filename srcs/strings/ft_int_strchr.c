/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:13:18 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:07:45 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	if (!s)
		return (-1);
	while (s[a])
	{
		if (s[a] == (char)c)
			return (a);
		a++;
	}
	if (s[a] == (char)c)
		return (a);
	return (-1);
}
