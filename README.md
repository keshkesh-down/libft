# LIBFT

## My own library: a collection of functions that will be a useful tool for cursus.

#### Makefile
`make` to compile without bonus functions.

`make bonus` to compile with bonuses.

`make clean` to delete `*.o` files.

`make fclean` to delete `*.o` and `libft.a` files.

`make re` to delete `*.o` and `libft.a` files, and, to compile without bonus functions.

Prototype | Description
---|---
*MANDATORY PART* | 100/100 |
`int ft_isalpha(int c)` |The `isalpha()` function checks whether a character is an alphabet or not.
`int ft_isdigit(int c)` |The `isdigit()` function checks whether a character is numeric character (0-9) or not.
`int ft_isalnum(int c)` |The `isalnum()` function checks whether the argument passed is an alphanumeric character (alphabet or number) or not.
`int ft_isascii(int c)` |The `isascii()` function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
`int ft_isprint(int c)` |The `isprint()` function tests for any printing character, including space (‘ ’).
`size_t ft_strlen(const char *s)` |The `strlen()` function computes the length of the string s.
`void *ft_memset(void *b, int c, size_t len)` |The `memset()` function writes len bytes of value c (converted to an unsigned char) to the string b.
`void ft_bzero(void *s, size_t n)` |The `bzero()` function writes n zeroed bytes to the string s.  If n is zero, `bzero()` does nothing.
`void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)` |The `memcpy()` function copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use `memmove()` instead.
`void *ft_memmove(void *dst, const void *src, size_t len)` |The `memmove()` function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner.
`size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)` |The `strlcpy()` copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
`size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)` |The `strlcat()` appends string src to the end of dst.  It will append at most dstsize - `strlen(dst)` - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
`int ft_toupper(int c)` |The `toupper()` function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF.
`int ft_tolower(int c)` |The `tolower()` function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.
`char *ft_strchr(const char *s, int c)` |The `strchr()` function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
`char *ft_strrchr(const char *s, int c)` |The `strrchr()` function is identical to `strchr()`, except it locates the last occurrence of c.
`int ft_strncmp(const char *s1, const char *s2, size_t n)` |The `strncmp()` function lexicographically compare the null- terminated strings s1 and s2. The `strncmp()` function compares not more than n characters.  Because `strncmp()` is designed for comparing strings rather than binary data, characters that appear after a ‘\0’ character are not compared.
`void *ft_memchr(const void *s, int c, size_t n)` |The `memchr()` function locates the first occurrence of c (converted to an unsigned char) in string s.
`int ft_memcmp(const void *s1, const void *s2, size_t n)` |The `memcmp()` function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.
`char *ft_strnstr(const char *haystack, const char *needle, size_t len)` |The `strnstr()` function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the `strnstr()` function is a FreeBSD specific API, it should only be used when portability is not a concern.
`int ft_atoi(const char *str)` |The `atoi()` function converts the initial portion of the string pointed to by str to int representation.
`void *ft_calloc(size_t count, size_t size)` |The `calloc()` function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.
`char *ft_strdup(const char *s1)` |The `strdup()` function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function `free()`.
`char *ft_substr(char const *s, unsigned int start, size_t len)` |The `ft_substr()` allocates (with `malloc()`) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
*`char *ft_strjoin(char const *s1, char const *s2)` |The `ft_strjoin()` allocates (with `malloc()`) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
`char *ft_strtrim(char const *s1, char const *set)` |The `ft_strtrim()` allocates (with `malloc()`) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
`char **ft_split(char const *s, char c)` |The `ft_split()` allocates (with `malloc()`) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
`char *ft_itoa(int n)` |The `ft_itoa()` allocates (with `malloc()`) and returns a string representing the integer received as an argument. Negative numbers must be handled.
`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |The `ft_strmapi()` applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with `malloc()`) resulting from successive applications of ’f’.
`void ft_striteri(char *s, void (*f)(unsigned int, char*))` |The `ft_striteri()` applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.
`void ft_putchar_fd(char c, int fd)` |The `ft_putchar_fd()` outputs the character ’c’ to the given file descriptor.
`void ft_putstr_fd(char *s, int fd)` |The `ft_putstr_fd()` outputs the string ’s’ to the given file descriptor.
`void ft_putendl_fd(char *s, int fd)` |The `ft_putendl_fd()` outputs the string ’s’ to the given file descriptor followed by a newline.
`void ft_putnbr_fd(int n, int fd)` |The `ft_putnbr_fd()` outputs the integer ’n’ to the given file descriptor.
  |  
*BONUS PART*| 25/25 | 
`t_list *ft_lstnew(void *content)` | The `ft_lstnew()` allocates (with `malloc()`) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
`void ft_lstadd_front(t_list **lst, t_list *new)` | The `ft_lstadd_front()` adds the node ’new’ at the beginning of the list.
`int ft_lstsize(t_list *lst)` | The `ft_lstsize()` counts the number of nodes in a list.
`t_list *ft_lstlast(t_list *lst)` | The `ft_lstlast()` returns the last node of the list.
`void ft_lstadd_back(t_list **lst, t_list *new)` | The `ft_lstadd_back()` adds the node ’new’ at the end of the list.
`void ft_lstdelone(t_list *lst, void (*del)(void *))` | The `ft_lstdelone()` takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.
`void ft_lstclear(t_list **lst, void (*del)(void *))` | The `ft_lstclear()` deletes and frees the given node and every successor of that node, using the function ’del’ and `free()`. Finally, the pointer to the list must be set to NULL.
`void ft_lstiter(t_list *lst, void (*f)(void *))` | The `ft_lstiter()` iterates the list ’lst’ and applies the function ’f’ on the content of each node.
`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | The `ft_lstmap()` iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
