/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:01 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:04:07 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list	*last;

	last = NULL;
	if (alst)
	{
		if (*alst)
		{
			last = ft_lstlast(*alst);
			last->next = newlst;
		}
		else
			*alst = newlst;
	}
}
