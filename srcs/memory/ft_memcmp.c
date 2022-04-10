/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:29:16 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:19 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*str1;
	unsigned char	*str2;

	a = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (a < n)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			a++;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}
