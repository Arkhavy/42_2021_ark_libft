/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_square_board.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:03:37 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/18 16:08:50 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	ft_mlx_square_board(t_mlxp program, int coeff, int hex_color)
{
	int	x;
	int	y;

	y = 0;
	while (y < program.win_height)
	{
		x = 0;
		while (x < program.win_width)
		{
			ft_mlx_square(program, coeff, x, hex_color);
			x += coeff;
		}
		y += coeff;
	}
}
