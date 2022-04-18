# Ark_Libft

## List of files

## incs
| File | Description |
| --- | --- |
| libft.h					| Contains all includes and some constants |
| ft_booleans.h				| A header for all booleans functions |
| ft_conversions.h			| A header for all conversion functions |
| ft_counters.h				| A header for all counting functions |
| ft_lists.h				| A header for all linked lists functions |
| ft_maths.h				| A header for all maths functions |
| ft_memory.h				| A header for all memory management functions |
| ft_prints.h				| A header for functions made to print things |
| ft_projects.h				| A header for some projets added to libft |
| ft_strings.h				| A header for string management function |

## srcs
### booleans
| File | Prototype |
| --- | --- |
| ft_isalnum.c				| `int		ft_isalnum(int c);` |
| ft_isalpha.c				| `int		ft_isalnum(int c);` |
| ft_isascii.c				| `int		ft_isascii(int c);` |
| ft_ischarset.c			| `int		ft_ischarset(char c, char *set);` |
| ft_isdigit.c				| `int		ft_isdigit(int c);` |
| ft_islower.c				| `int		ft_islower(int c);` |
| ft_isnotcharset.c			| `int		ft_isnotcharset(char c, char *set);` |
| ft_isprime.c				| `int		ft_isprime(int nb);` |
| ft_isprint.c				| `int		ft_isprint(int c);` |
| ft_isspace.c				| `int		ft_isspace(int c);` |
| ft_isupper.c				| `int		ft_isupper(int c);` |

### conversions
| File | Prototype |
| --- | --- |
| ft_atoi.c					| `int		ft_atoi(const char *str);` |
| ft_atol.c					| `long		ft_atol(const char *str);` |
| ft_big_atoi.c				| `int		ft_big_atoi(const char *str);` |
| ft_big atol.c				| `long		ft_big_atol(const char *str);` |
| ft_itoa.c					| `char		*ft_itoa(int n);` |
| ft_str_tolower.c			| `char		*ft_str_tolower(const char *str);` |
| ft_str_toupper.c			| `char		*ft_str_toupper(const char *str);` |
| ft_striteri.c				| `void		ft_striteri(char *s, void (*f)(unsigned int, char *));` |
| ft_strmapi.c				| `char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));` |
| ft_swap.c					| `void		ft_swap(int *a, int *b);` |
| ft_tolower.c				| `int		ft_tolower(int c);` |
| ft_toupper.c				| `int		ft_toupper(int c);` |

### counters
| File | Prototype |
| --- | --- |
| ft_count_char.c			| `size_t	ft_count_char(long nb);` |
| ft_count_word.c			| `size_t	ft_count_word(const char *str, const char c);` |
| ft_strlcat.c				| `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);` |
| ft_strlcpy.c				| `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);` |
| ft_strlen.c				| `size_t	ft_strlen(const char *str);` |

### lists
| File | Prototype |
| --- | --- |
| ft_lstadd_back.c			| `void		ft_lstadd_back(t_list **alst, t_list *newlst);` |
| ft_lstadd_front.c			| `void		ft_lstadd_front(t_list **alst, t_list *newlst);` |
| ft_lstclear.c				| `void		ft_lstclear(t_list **lst, void (*del)(void *));` |
| ft_lstdelone.c			| `void		ft_lstdelone(t_list *lst, void (*del)(void *));` |
| ft_lstfree.c				| `void		ft_lstfree(t_list *lst)` |
| ft_lstiter.c				| `void		ft_lstiter(t_list *lst, void (*f)(void *));` |
| ft_lstlast.c				| `t_list	*ft_lstlast(t_list *lst);` |
| ft_lstmap.c				| `t_list	*ft_lstmap(t_list *lst, void *(*f)(void *)), void (*del)(void *);` |
| ft_lstnew.c				| `t_list	*ft_lstnew(void *content);` |
| ft_lstsize.c				| `int		ft_lstsize(t_list *lst);` |

### maths
| File | Prototype |
| --- | --- |
| ft_approx_sqrt.c			| `int		ft_approx_sqrt(int nb);` |
| ft_factorial.c			| `int		ft_factorial(int nb);` |
| ft_find_next_prime.c		| `int		ft_find_next_prime(int nb);` |
| ft_get_highest.c			| `int		ft_get_highest(int nb1, int nb2);` |
| ft_get_lowest.c			| `int		ft_get_lowest(int nb1, int nb2);` |
| ft_power.c				| `int		ft_power(int nb, int power);` |
| ft_sqrt.c					| `int		ft_sqrt(int nb);` |

### memory
| File | Prototype |
| --- | --- |
| ft_bzero.c				| `void		ft_bzero(void *s, size_t n);` |
| ft_calloc.c				| `void		*ft_calloc(size_t count, size_t size);` |
| ft_free_split.c			| `void		ft_free_split(char **split);` |
| ft_free.c					| `void		ft_free(char **str);` |
| ft_memchr.c				| `void		*ft_memchr(const void *s, int c, size_t n);` |
| ft_memcmp.c				| `int		ft_memcmp(const void *s1, const void *s2, size_t n);` |
| ft_memcpy.c				| `void		*ft_memcpy(void *dst, void *src, size_t n);` |
| ft_memmove.c				| `void		*ft_memmove(void *dst, const void *src, size_t n);` |
| ft_memset.c				| `void		*ft_memset(void *b, int c, size_t len);` |

### prints
| File | Prototype |
| --- | --- |
| ft_int_putchar_fd.c		| `int		ft_int_putchar_fd(int c, int fd);` |
| ft_int_putchar.c			| `int		ft_int_putchar(int c);` |
| ft_int_putnbr_base_fd.c	| `int		ft_int_putnbr_base_fd(unsigned int nbr, char *base, int fd);` |
| ft_int_putnbr_base.c		| `int		ft_int_putnbr_base(unsigned int nbr, char *base);` |
| ft_int_putnbr_fd.c		| `int		ft_int_putnbr_fd(int n, int fd);` |
| ft_int_putnbr.c			| `int		ft_int_putnbr(int n);` |
| ft_int_putptr_fd.c		| `int		ft_int_putptr_fd(unsigned long long nbr, int fd);` |
| ft_int_putptr.c			| `int		ft_int_putptr(unsigned long long nbr);` |
| ft_int_putstr_fd.c		| `int		ft_int_putstr_fd(char *s, int fd);` |
| ft_int_putstr.c			| `int		ft_int_putstr(char *s);` |
| ft_putchar_fd.c			| `void		ft_putchar_fd(char c, int fd);` |
| ft_putendl_fd.c			| `void		ft_putendl_fd(char *s, int fd);` |
| ft_putnbr_base_fd.c		| `void		ft_putnbr_base_fd(unsigned int nbr, char *base, int fd);` |
| ft_putnbr_fd.c			| `void		ft_putnbr_fd(int n, int fd);` |
| ft_putptr_fd.c			| `void		ft_putptr_fd(unsigned long long nbr, int fd);` |
| ft_putstr_fd.c			| `void		ft_putstr_fd(char *s, int fd);` |

### projects
| File | Prototype |
| --- | --- |
| ft_dprintf.c				| `int		ft_dprintf(int fd, const char *format, ...);` |
| ft_gnl_join.c				| `char		*ft_gnljoin(int fd);` |
| ft_printf.c				| `int		ft_printf(const char *format, ...);` |
| get_next_line.c			| `char		*get_next_line(int fd);` |

### strings
| File | Prototype |
| --- | --- |
| ft_int_strchr.c			| `int		ft_int_strchr(const char *s, int c);` |
| ft_split.c				| `char		**ft_split(const char *s, char c);` |
| ft_strcat.c				| `char		*ft_strcat(char *dst, const char *src);` |
| ft_strchr.c				| `char		*ft_strchr(const char *s, int c);` |
| ft_strcpy.c				| `char		*ft_strcpy(char *dst, const char *src);` |
| ft_strdup.c				| `char		*ft_strdup(const char *s1);` |
| ft_strfreejoin.c			| `char		*ft_strfreejoin(const char *s1, const char *s2);` |
| ft_strjoin.c				| `char		*ft_strjoin(const char *s1, const char *s2);` |
| ft_strncat.c				| `char		*ft_strncat(char *dst, const char *src, size_t len);` |
| ft_strncmp.c				| `int		ft_strncmp(const char *s1, const char *s2, size_t n);` |
| ft_strncpy.c				| `char		*ft_strncpy(char *dst, const char *src, size_t len);` |
| ft_strnjoin.c				| `char		*ft_strnjoin(const char *s1, const char *s2, ssize_t index);` |
| ft_strnstr.c				| `char		*ft_strnstr(const char *haystack, const char *needle, size_t len);` |
| ft_strrchr.c				| `char		*ft_strrchr(const char *s, int c);` |
| ft_strstr.c				| `char		*ft_strstr(const char *haystack, const char *needle);` |
| ft_strtrim.c				| `char		*ft_strtrim(const char *s1, const char *set);` |
| ft_substr.c				| `char		*ft_substr(const char *s, unsigned int start, size_t len);` |
| ft_unsplit.c				| `char		*ft_unsplit(char **split, char c);` |