/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:04:15 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/19 16:43:40 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	a;

	a = 0;
	while (a < len && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	while (a < len)
	{
		dst[a] = '\0';
		a++;
	}
	return (dst);
}
