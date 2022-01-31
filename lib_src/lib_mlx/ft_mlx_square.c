/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:51:17 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:41 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mlx_square(t_mlxp program, int coeff, int x_start, int hex_color)
{
	int	a;
	int	b;

	a = x_start;
	b = x_start;
	while (a < x_start + coeff)
		mlx_pixel_put(program.mlx, program.win, a++, b, hex_color);
	while (b < x_start + coeff)
		mlx_pixel_put(program.mlx, program.win, a, b++, hex_color);
	while (a > x_start)
		mlx_pixel_put(program.mlx, program.win, a--, b, hex_color);
	while (b > x_start)
		mlx_pixel_put(program.mlx, program.win, a, b--, hex_color);
}
