# Ark_Libft

## List of files

## lib_includes
| File | Description |
| --- | --- |
| `libft.h` | Contains all includes and some constants |
| `ft_bool.h` | A list of all booleans functions |
| `ft_conv.h` | A list of all conversion functions |
| `ft_count.h` | A list of all counting functions |
| `ft_lst.h` | A list of all linked lists functions |
| `ft_maths.h` | A list of all maths functions |
| `ft_mem.h` | A list of all memory management functions |
| `ft_mlx_keys.h` | Some constants made for the mlx to handle keyboard |
| `ft_mlx.h` | A list of some functions for the mlx, currently disabled |
| `ft_print.h` | A list of functions made to print things |
| `ft_proj.h` | A list of some projets added to libft |
| `ft_str.h` | A list of string management function |

## lib_src
### lib_bool
| File | Prototype | Description |
| --- | --- | --- |
| `ft_isalnum.c` | int	ft_isalnum(int c); | Check if the parameter given is alphanumeric |
| `ft_isalpha.c` | int	ft_isalnum(int c); | Check if the parameter given is a letter |
| `ft_isascii.c` | int	ft_isascii(int c); | Check if the parameter given is an ascii character |
| `ft_isdigit.c` | int	ft_isdigit(int c); | Check if the parameter given is a number |
| `ft_isprint.c` | int	ft_isprint(int c); | Check if the parameter given is printable |
| `ft_ischarset.c` | int	ft_ischarset(char c, char *set); | Check if the param1 is part of param2 |
| `ft_isnotcharset.c` | int	ft_isnotcharset(char c, char *set); | Check if the param1 is not part of param2 |
| `ft_isupper.c` | int	ft_isupper(int c); | Check if the parameter given is an uppercase letter |
| `ft_islower.c` | int	ft_islower(int c); | Check if the parameter given is a lowercase letter |
| `ft_isspace.c` | int	ft_isspace(int c); | Check if the parameter given is a space character |
| `ft_isprime.c` | int	ft_isprime(int nb); | Check if the parameter given is a prime number |

### lib_conv
| File | Prototype | Description |
| --- | --- | --- |
| `ft_atoi.c` | int	ft_atoi(const char *str); | Convert the parameter given into an int |
| `ft_toupper.c` | int	ft_toupper(int c); | Convert the parameter given into an uppercase letter |
| `ft_tolower.c` | int	ft_tolower(int c); | Convert the parameter given into a lowercase letter |
| `ft_itoa.c` | char	*ft_itoa(int n); | Convert the parameter given into a string |
| `ft_strmapi.c` | char	*ft_strmapi(const char *s, char (\*f)(unsigned int, char)); | Applies the f function to every character of the param 1 to create another string |
| `ft_striteri.c` | void	ft_striteri(char *s, void (\*f)(unsigned int, char *)); | Applies the f function to every character of the param 1 |
| `ft_atol.c` | long	ft_atol(const char *str); | Convert the parameter given into a long int |
| `ft_big_atoi.c` | int	ft_big_atoi(const char *str); | Same as ft_atoi but doesn't handle max and min int |
| `ft_big atol.c` | long	ft_big_atol(const char *str); | Same as ft_atol but doesn't handle max and min long |
| `ft_swap.c` | void	ft_swap(int *a, int *b); | Swap param 1 with param 2 by using pointers |
| `ft_str_toupper.c` | char	*ft_str_toupper(const char *str); | Create another string to convert all lowercase characters of the parameter given into uppercase characters |
| `ft_str_tolower.c` | char	*ft_str_tolower(const char *str); | Create another string to convert all uppercase characters of the parameter given into lowercase characters |

### lib_count
| File | Prototype | Description |
| --- | --- | --- |
| `ft_strlcat.c` | size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); | Concatenate param2 in param1 until dstsize is reached and return the new size of dst |
| `ft_strlcpy.c` | size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); | Copy param2 in param1 until dstsize is reached and return the new size of dst |
| `ft_strlen.c` | size_t	ft_strlen(const char *str); | Count all characters in the parameter given |
| `ft_word_count.c` | size_t	ft_word_count(const char *str); | Count all words in the parameter given |
| `ft_count_char.c` | size_t	ft_count_char(long nb); | Count all characters in the number given as parameter |

### lib_lst
| File | Prototype | Description |
| --- | --- | --- |
| `ft_lstsize.c` | int	ft_lstsize(t_list *lst); | Count all links in the list given as parameter |
| `ft_lstdelone.c` | void	ft_lstdelone(t_list *lst, void (*del)(void *)); | Delete only the link given by param 1 and free the memory allocated with it |
| `ft_lstclear.c` | void	ft_lstclear(t_list **lst, void (*del)(void *)); | Delete and free the whole linked list given as param1 using param 2 and put the initial pointer to NULL |
| `ft_lstiter.c` | void	ft_lstiter(t_list *lst, void (*f)(void *)); | Applies the function given as param 2 to each link of the linked list given as param 1 |
| `ft_lstadd_front.c` | void	ft_lstadd_front(t_list **alst, t_list *newlst); | Add the param 2 at the beginning of the linked list given as param 1 |
| `ft_lstadd_back.c` | void	ft_lstadd_back(t_list **alst, t_list *newlst); | Add the param 2 at the end of the linked list given as param 1 |
| `ft_lstnew.c` | t_list	*ft_lstnew(void *content); | Allocate a new element and initialize both content and next link to NULL |
| `ft_lstlast.c` | t_list	*ft_lstlast(t_list *lst); | Return the last element of param 1 |
| `ft_lstmap.c` | t_list	*ft_lstmap(t_list *lst, void *(*f)(void *)), void (*del)(void *); | Applies the function given as param 2 to each element of the linked list by creating a new list, and use param 3 to delete the content of an element if needed |

### lib_maths
| File | Prototype | Description |
| --- | --- | --- |
| `ft_approx_sqrt.c` | int	ft_approx_sqrt(int nb); | Returns the closest sqrt of the number given as parameter |
| `ft_sqrt.c` | int	ft_sqrt(int nb); | Returns the exact sqrt of the number given as parameter or 0 if not found |
| `ft_factorial.c` | int	ft_factorial(int nb); | Returns the result of the factorial of the number given as parameter |
| `ft_power.c` | int	ft_power(int nb, int power); | Returns the result of param 1 multiplied x times by itself where x is given by param 2 |
| `ft_get_highest.c` | int	ft_get_highest(int nb1, int nb2); | Compare param 1 with param 2 and returns the highest between the two |
| `ft_find_next_prime.c` | int	ft_find_next_prime(int nb); | Returns the next prime number from the number given as param 1 |

### lib_mem
| File | Prototype | Description |
| --- | --- | --- |
| `ft_memcmp.c` | int	ft_memcmp(const void *s1, const void *s2, size_t n); | Compare n characters of two pointers given by param 1 and 2 and returns the difference |
|` ft_memchr.c` | void	*ft_memchr(const void *s, int c, size_t n); | Check if param 2 exists in param 1 depending on n and returns param 1 from the index of the first iteration found, else returns NULL |
| `ft_memcpy.c` | void	*ft_memcpy(void *dst, void *src, size_t n); | Copy n characters of param 2 in param 1 using pointers |
| `ft_memmove.c` | void	*ft_memmove(void *dst, const void *src, size_t n); | Copy n characters of param 2 in param 1 using pointers depending on the addresses position |
| `ft_memset.c` | void	*ft_memset(void *b, int c, size_t len); | Set param 2 as every characters of param 1 depending on param 3 using the adress of param 1 |
| `ft_bzero.c` | void	ft_bzero(void *s, size_t n); | Set n characters of param 1 as 0 using the address of param 1 |
| `ft_calloc.c` | void	*ft_calloc(size_t count, size_t size); | Allocate count * size memory to a pointer and set all of it to 0 using bzero, then returns the pointer allocated |
| `ft_free.c` | void	ft_free(char **str); | Free the parameter given and set it to NULL |
| `ft_free_split.c` | void	ft_free_split(char **split); | Free each element of a split given as parameter and free the split itself |

WiP