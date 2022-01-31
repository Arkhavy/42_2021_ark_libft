/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:59:02 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:00:30 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROJ_H
# define FT_PROJ_H

# include "libft.h"

/*/////////////////////////////////////////////////////////////////////////////
		PROJECTS FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

char	*get_next_line(int fd);
int		ft_printf(const char *format, ...);

char	*ft_gnl_join(int fd);
int		ft_heredoc(char *limiter);

#endif //FT_PROJ_H