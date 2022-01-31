/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:57:59 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:00:42 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "libft.h"

/*/////////////////////////////////////////////////////////////////////////////
		PRINT FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int		ft_int_putchar(int c);
int		ft_int_putstr(char *s);
int		ft_int_putnbr(int n);
int		ft_int_putptr(unsigned long long nbr);
int		ft_int_putnbr_base(unsigned int nbr, char *base);
void	ft_putptr_fd(unsigned long long nbr, int fd);
void	ft_putnbr_base_fd(unsigned int nbr, char *base, int fd);

#endif //FT_PRINT_H