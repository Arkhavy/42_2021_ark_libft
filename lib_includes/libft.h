/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:31:48 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/19 16:43:21 by ljohnson         ###   ########lyon.fr   */
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
# include "ft_mlx_keys.h"

/*/////////////////////////////////////////////////////////////////////////////
		DEFINES
*//////////////////////////////////////////////////////////////////////////////

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# define UPPERHEX "0123456789ABCDEF"
# define LOWERHEX "0123456789abcdef"
# define BASEDEC "0123456789"
# define PRINTFCSET "scdiuxXp"

/*/////////////////////////////////////////////////////////////////////////////
		BOOLEAN FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_ischarset(char c, char *set);
int		ft_isnotcharset(char c, char *set);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isspace(int c);
int		ft_isprime(int nb);

/*/////////////////////////////////////////////////////////////////////////////
		MEMORY MANAGEMENT FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

void	ft_free(char **str);
void	ft_free_split(char **split);

/*/////////////////////////////////////////////////////////////////////////////
		STR FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);

char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnjoin(const char *s1, const char *s2, ssize_t index);
int		ft_int_strchr(const char *s, int c);
char	*ft_unsplit(char **split, char c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t len);
char	*ft_strfreejoin(const char *s1, const char *s2);

/*/////////////////////////////////////////////////////////////////////////////
		COUNT FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);

size_t	ft_word_count(const char *str);
size_t	ft_count_char(long nb);

/*/////////////////////////////////////////////////////////////////////////////
		MATHS FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

int		ft_approx_sqrt(int nb);
int		ft_sqrt(int nb);

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

/*/////////////////////////////////////////////////////////////////////////////
		CONVERSION FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

long	ft_atol(const char *str);
int		ft_big_atoi(const char *str);
long	ft_big_atol(const char *str);
void	ft_swap(int *a, int *b);
char	*ft_str_toupper(const char *str);
char	*ft_str_tolower(const char *str);

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
void	ft_putnbr_base_fd(unsigned int nbr, char *base);

/*/////////////////////////////////////////////////////////////////////////////
		LINKED LISTS FUNCTIONS AND STRUCT
*//////////////////////////////////////////////////////////////////////////////

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **alst, t_list *newlst);
void	ft_lstadd_back(t_list **alst, t_list *newlst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*/////////////////////////////////////////////////////////////////////////////
		PROJECTS FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

char	*get_next_line(int fd);
int		ft_printf(const char *format, ...);

char	*ft_gnl_join(int fd);
int		ft_heredoc(int fd);

#endif