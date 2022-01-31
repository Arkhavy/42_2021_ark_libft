/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:31:48 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:02:02 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <sys/wait.h>
# include <stdio.h>
# include <math.h>
# include <sys/time.h>
# include <pthread.h>
# include "ft_bool.h"
# include "ft_conv.h"
# include "ft_count.h"
# include "ft_lst.h"
# include "ft_maths.h"
# include "ft_mem.h"
# include "ft_mlx_keys.h"
# include "ft_mlx.h"
# include "ft_print.h"
# include "ft_proj.h"
# include "ft_str.h"

# ifndef UPPERHEX
#  define UPPERHEX "0123456789ABCDEF"
# endif //UPPERHEX

# ifndef LOWERHEX
#  define LOWERHEX "0123456789abcdef"
# endif //LOWERHEX

# ifndef BASEDEC
#  define BASEDEC "0123456789"
# endif //BASEDEC

# ifndef PRINTFCSET
#  define PRINTFCSET "scdiuxXp"
# endif //PRINTFCSET

enum	e_const
{
	STDIN = 0,
	STDOUT = 1,
	STDERR = 2,
	TRUE = 1,
	FALSE = 0,
	NEGATIVE = -1,
	POSITIVE = 1,
	BUFFER_SIZE = 1,
};

#endif //LIBFT_H