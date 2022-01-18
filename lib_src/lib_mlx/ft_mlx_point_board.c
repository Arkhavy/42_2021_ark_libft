/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_point_board.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:09:44 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/18 16:11:24 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib_includes/libft.h"

void	ft_mlx_point_board(t_mlxp program, int coeff, int hex_color)
{
	int	x;
	int	y;

	y = 0;
	while (y < program.win_height)
	{
		x = 0;
		while (x < program.win_width)
		{
			mlx_pixel_put(program.mlx, program.win, x, y, hex_color);
			x += coeff;
		}
		y += coeff;
	}
}
