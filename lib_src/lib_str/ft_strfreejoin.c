/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:10:39 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/19 16:12:46 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_strfreejoin(const char *s1, const char *s2)
{
	char	*str;
	char	*tmp1;
	char	*tmp2;

	if (!s1 || !s2)
		return (NULL);
	tmp1 = s1;
	tmp2 = s2;
	str = ft_strjoin(s1, s2);
	free (tmp1);
	free (tmp2);
	return (str);
}
