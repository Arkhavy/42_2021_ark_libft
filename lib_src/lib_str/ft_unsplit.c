/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:42:33 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/19 15:50:17 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

char	*ft_unsplit(char **split, char c)
{
	char	*str;
	char	*tmp;
	int		a;

	a = 0;
	str = NULL;
	while (split[a])
	{
		tmp = split[a];
		split[a] = ft_strjoin(split[a], c);
		free (tmp);
		a++;
	}
	a = 0;
	while (split[a])
	{
		tmp = str;
		str = ft_strnjoin(str, split[a], ft_strlen(split[a]));
		free (tmp);
		a++;
	}
	str[ft_strlen(str) - 2] = '\0';
	return (str);
}
