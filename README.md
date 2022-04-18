# Ark_Libft

## List of files

## incs
| File | Description |
| --- | --- |
| `libft.h`					| Contains all includes and some constants |
| `ft_booleans.h`			| A header for all booleans functions |
| `ft_conversions.h`		| A header for all conversion functions |
| `ft_counters.h`			| A header for all counting functions |
| `ft_lists.h`				| A header for all linked lists functions |
| `ft_maths.h`				| A header for all maths functions |
| `ft_memory.h`				| A header for all memory management functions |
| `ft_prints.h`				| A header for functions made to print things |
| `ft_projects.h`			| A header for some projets added to libft |
| `ft_strings.h`			| A header for string management function |

## srcs
### booleans
| File | Prototype |
| --- | --- |
| `ft_isalnum.c`			| int		ft_isalnum(int c); |
| `ft_isalpha.c`			| int		ft_isalnum(int c); |
| `ft_isascii.c`			| int		ft_isascii(int c); |
| `ft_ischarset.c`			| int		ft_ischarset(char c, char *set); |
| `ft_isdigit.c`			| int		ft_isdigit(int c); |
| `ft_islower.c`			| int		ft_islower(int c); |
| `ft_isnotcharset.c`		| int		ft_isnotcharset(char c, char *set); |
| `ft_isprime.c`			| int		ft_isprime(int nb); |
| `ft_isprint.c`			| int		ft_isprint(int c); |
| `ft_isspace.c`			| int		ft_isspace(int c); |
| `ft_isupper.c`			| int		ft_isupper(int c); |

### conversions
| File | Prototype |
| --- | --- |
| `ft_atoi.c`				| int		ft_atoi(const char *str); |
| `ft_atol.c`				| long		ft_atol(const char *str); |
| `ft_big_atoi.c`			| int		ft_big_atoi(const char *str); |
| `ft_big atol.c`			| long		ft_big_atol(const char *str); |
| `ft_itoa.c`				| char		*ft_itoa(int n); |
| `ft_str_tolower.c`		| char		*ft_str_tolower(const char *str); |
| `ft_str_toupper.c`		| char		*ft_str_toupper(const char *str); |
| `ft_striteri.c`			| void		ft_striteri(char *s, void (\*f)(unsigned int, char *)); |
| `ft_strmapi.c`			| char		*ft_strmapi(const char *s, char (\*f)(unsigned int, char)); |
| `ft_swap.c`				| void		ft_swap(int *a, int *b); |
| `ft_tolower.c`			| int		ft_tolower(int c); |
| `ft_toupper.c`			| int		ft_toupper(int c); |

### counters
| File | Prototype |
| --- | --- |
| `ft_count_char.c`			| size_t	ft_count_char(long nb); |
| `ft_count_word.c`			| size_t	ft_count_word(const char *str, const char c); |
| `ft_strlcat.c`			| size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); |
| `ft_strlcpy.c`			| size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); |
| `ft_strlen.c`				| size_t	ft_strlen(const char *str); |

### lists
| File | Prototype |
| --- | --- |
| `ft_lstadd_back.c`		| void		ft_lstadd_back(t_list **alst, t_list *newlst); |
| `ft_lstadd_front.c`		| void		ft_lstadd_front(t_list **alst, t_list *newlst); |
| `ft_lstclear.c`			| void		ft_lstclear(t_list **lst, void (*del)(void *)); |
| `ft_lstdelone.c`			| void		ft_lstdelone(t_list *lst, void (*del)(void *)); |
| `ft_lstfree.c`			| void		ft_lstfree(t_list *lst) |
| `ft_lstiter.c`			| void		ft_lstiter(t_list *lst, void (*f)(void *)); |
| `ft_lstlast.c`			| t_list	*ft_lstlast(t_list *lst); |
| `ft_lstmap.c`				| t_list	*ft_lstmap(t_list *lst, void *(*f)(void *)), void (*del)(void *); |
| `ft_lstnew.c`				| t_list	*ft_lstnew(void *content); |
| `ft_lstsize.c`			| int		ft_lstsize(t_list *lst); |

### maths
| File | Prototype |
| --- | --- |
| `ft_approx_sqrt.c`		| int		ft_approx_sqrt(int nb); |
| `ft_sqrt.c`				| int		ft_sqrt(int nb); |
| `ft_factorial.c`			| int		ft_factorial(int nb); |
| `ft_power.c`				| int		ft_power(int nb, int power); |
| `ft_get_highest.c`		| int		ft_get_highest(int nb1, int nb2); |
| `ft_find_next_prime.c`	| int		ft_find_next_prime(int nb); |

### memory
| File | Prototype |
| --- | --- |
| `ft_memcmp.c`				| int		ft_memcmp(const void *s1, const void *s2, size_t n); |
|` ft_memchr.c`				| void		*ft_memchr(const void *s, int c, size_t n); |
| `ft_memcpy.c`				| void		*ft_memcpy(void *dst, void *src, size_t n); |
| `ft_memmove.c`			| void		*ft_memmove(void *dst, const void *src, size_t n); |
| `ft_memset.c`				| void		*ft_memset(void *b, int c, size_t len); |
| `ft_bzero.c`				| void		ft_bzero(void *s, size_t n); |
| `ft_calloc.c`				| void		*ft_calloc(size_t count, size_t size); |
| `ft_free.c`				| void		ft_free(char **str); |
| `ft_free_split.c`			| void		ft_free_split(char **split); |

### prints
### projects
### strings
WiP