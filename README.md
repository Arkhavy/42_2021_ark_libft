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
| ft_isalnum.c | int	ft_isalnum(int c); | Check if the parameter given is alphanumeric |
| ft_isalpha.c | int	ft_isalnum(int c); | Check if the parameter given is a letter |
| ft_isascii.c | int	ft_isascii(int c); | Check if the parameter given is an ascii character |
| ft_isdigit.c | int	ft_isdigit(int c); | Check if the parameter given is a number |
| ft_isprint.c | int	ft_isprint(int c); | Check if the parameter given is printable |
| ft_ischarset.c | int	ft_ischarset(char c, char *set); | Check if the param1 is part of param2 |
| ft_isnotcharset.c | int	ft_isnotcharset(char c, char *set); | Check if the param1 is not part of param2 |
| ft_isupper.c | int	ft_isupper(int c); | Check if the parameter given is an uppercase letter |
| ft_islower.c | int	ft_islower(int c); | Check if the parameter given is a lowercase letter |
| ft_isspace.c | int	ft_isspace(int c); | Check if the parameter given is a space character |
| ft_isprime.c | int	ft_isprime(int nb); | Check if the parameter given is a prime number |

### lib_conv
| File | Prototype | Description |
| --- | --- | --- |
| ft_atoi.c | int	ft_atoi(const char *str); | Convert the parameter given into an int |
| ft_toupper.c | int	ft_toupper(int c); | Convert the parameter given into an uppercase letter |
| ft_tolower.c | int	ft_tolower(int c); | Convert the parameter given into a lowercase letter |
| ft_itoa.c | char	*ft_itoa(int n); | Convert the parameter given into a string |
| ft_strmapi.c | char	*ft_strmapi(const char *s, char (\*f)(unsigned int, char)); | Applies the f function to every character of the param 1 to create another string |
| ft_striteri.c | void	ft_striteri(char *s, void (\*f)(unsigned int, char *)); | Applies the f function to every character of the param 1 |
| ft_atol.c | long	ft_atol(const char *str); | Convert the parameter given into a long int |
| ft_big_atoi.c | int	ft_big_atoi(const char *str); | Same as ft_atoi but doesn't handle max and min int |
| ft_big atol.c | long	ft_big_atol(const char *str); | Same as ft_atol but doesn't handle max and min long |
| ft_swap.c | void	ft_swap(int *a, int *b); | Swap param 1 with param 2 by using pointers |
| ft_str_toupper.c | char	*ft_str_toupper(const char *str); | Create another string to convert all lowercase characters of the parameter given into uppercase characters |
| ft_str_tolower.c | char	*ft_str_tolower(const char *str); | Create another string to convert all uppercase characters of the parameter given into lowercase characters |

### lib_count
| File | Prototype | Description |
| --- | --- | --- |
| ft_strlcat.c | size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); | Concatenate param2 in param1 until dstsize is reached and return the new size of dst |
| ft_strlcpy.c | size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); | Copy param2 in param1 until dstsize is reached and return the new size of dst |
| ft_strlen.c | size_t	ft_strlen(const char *str); | Count all characters in the parameter given |
| ft_word_count.c | size_t	ft_word_count(const char *str); | Count all words in the parameter given |
| ft_count_char.c | size_t	ft_count_char(long nb); | Count all characters in the number given as parameter |

### lib_lst
| File | Prototype | Description |
| --- | --- | --- |
| ft_lstsize.c | int	ft_lstsize(t_list *lst) | Count all links in the list given as parameter |
| ft_lstdelone.c | void	ft_lstdelone(t_list *lst, void (*del)(void *)) |

WiP
