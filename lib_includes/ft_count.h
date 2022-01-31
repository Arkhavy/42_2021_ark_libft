/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:49:16 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:01:00 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COUNT_H
# define FT_COUNT_H

# include "libft.h"

/*/////////////////////////////////////////////////////////////////////////////
		COUNT FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);

size_t	ft_word_count(const char *str);
size_t	ft_count_char(long nb);

#endif //FT_COUNT_H