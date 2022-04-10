/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:31:48 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/10 08:46:16 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Global
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

//Libft
# include <ft_bool.h>
# include <ft_conv.h>
# include <ft_count.h>
# include <ft_lst.h>
# include <ft_maths.h>
# include <ft_mem.h>
# include <ft_print.h>
# include <ft_proj.h>
# include <ft_str.h>

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

# ifndef OPEN_MAX
#  define OPEN_MAX 10
# endif //OPEN_MAX

# ifndef STDIN
#  define STDIN 0
# endif //STDIN

# ifndef STDOUT
#  define STDOUT 1
# endif //STDOUT

# ifndef STDERR
#  define STDERR 2
# endif //STDERR

# ifndef TRUE
#  define TRUE 1
# endif //TRUE

# ifndef FALSE
#  define FALSE 0
# endif //FALSE

# ifndef NEGATIVE
#  define NEGATIVE -1
# endif //NEGATIVE

# ifndef POSITIVE
#  define POSITIVE 1
# endif //POSITIVE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif //BUFFERSIZE

#endif //LIBFT_H