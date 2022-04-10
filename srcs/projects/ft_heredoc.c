/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heredoc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:18:57 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/10 08:44:37 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_check_limiter(char *prompt, char *limiter)
{
	int	a;

	a = 0;
	if (!prompt)
		return (0);
	while (prompt[a] != '\n' && limiter[a])
	{
		if (prompt[a] != limiter[a])
			return (1);
		a++;
	}
	if (prompt[a] == '\n' && limiter[a] == '\0')
		return (0);
	return (1);
}

int	ft_heredoc(char *limiter)
{
	char	*prompt;
	int		pipe_fd[2];

	if (pipe(pipe_fd) == -1)
		return (-1);
	prompt = NULL;
	while (1)
	{
		ft_putstr_fd("FT here_doc> ", 1);
		prompt = get_next_line(0);
		if (!ft_check_limiter(prompt, limiter))
			break ;
		if (write(pipe_fd[1], prompt, ft_strlen(prompt)) == -1)
			return (-1);
		free (prompt);
	}
	free (prompt);
	close (pipe_fd[1]);
	return (pipe_fd[0]);
}
