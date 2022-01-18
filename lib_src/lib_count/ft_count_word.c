/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:35:01 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/18 13:41:15 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

int	ft_count_word(const char *str, const char c)
{
	int		a;
	int		count;

	a = 0;
	count = 0;
	while (str[a])
	{
		if (a == 0)
		{
			if (str[a] != c)
				count++;
		}
		else
		{
			if (str[a - 1] == c && str[a] != c)
				count++;
		}
		a++;
	}
	return (count);
}
