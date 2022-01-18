/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:30:31 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/18 13:43:32 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

size_t	ft_count_char(long nb)
{
	size_t	a;

	a = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		a++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		a++;
	}
	return (a);
}