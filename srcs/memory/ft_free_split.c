/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:23:03 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:09 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_split(char **split)
{
	int	a;

	a = 0;
	while (split[a])
	{
		free (split[a]);
		a++;
	}
	free (split);
}
