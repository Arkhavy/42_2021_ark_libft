/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:52:11 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:00:35 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H

# include "libft.h"

/*/////////////////////////////////////////////////////////////////////////////
		MLX FUNCTIONS AND STRUCTS
*//////////////////////////////////////////////////////////////////////////////

typedef struct s_mlx_img
{
	void	*ptr;
	char	*path;
	int		width;
	int		height;
}	t_mlxi;

typedef struct s_mlx_program
{
	void	*mlx;
	void	*win;
	t_mlxi	**img;
	int		x;
	int		y;
	int		win_width;
	int		win_height;
}	t_mlxp;

void	ft_mlx_square(t_mlxp program, int coeff, int x_start, int hex_color);
void	ft_mlx_square_board(t_mlxp program, int coeff, int hex_color);
void	ft_mlx_point_board(t_mlxp program, int coeff, int hex_color);

#endif //FT_MLX_H