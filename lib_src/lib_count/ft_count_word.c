/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:35:01 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:03:51 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
