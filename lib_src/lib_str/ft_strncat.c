/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:02:29 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/19 16:43:53 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	size_t	a;
	size_t	b;

	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	a = ft_strlen(dst);
	b = 0;
	while (src[b] && b < len)
	{
		dst[a + b] = src[b];
		b++;
	}
	dst[a + b] = '\0';
	return (dst);
}
