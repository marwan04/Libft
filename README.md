# libft 

Libft (Library of Functions)
The goal of *libft* is to build a custom C library from scratch, implementing some of the standard C library functions and even creating some additional helper functions.

Here's an overview of what the *libft* project involves:

 1. Understanding Low-Level C Programming: It focuses on fundamental C programming skills, including memory management, pointers, and data structures.
 2. Recreating Standard Library Functions:  writing C functions that mimic some of the functions in the standard C library (stdlib.h, string.h, etc.), giving a deep understanding of how these functions work under the hood.

### .c Files
where all of your function will be written in.

### .h (Header)
The header file is useful for 2 things:

 - Instead of doing `#include <unistd.h>` to all your .c files, you just add it once to the header file and then all the .c files will read it from your header file.
 - If one of the *libft* .c files uses another function from another .c file, instead of writing the function above, just include your header file and it will find it in your header file.

### Makefile
Makefile is where you will create a file to compile the project. With the Makefile there is no need to have a main function and cc to compile the project, you just type `make` when your Makefile is created.

## Libft Functions

#### 1. Testing and converting character functions

|     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_isalnum`](https://github.com/marwan04/Libft/blob/main/ft_isalnum.c)|Checks if `c` is alphanumeric (a letter or digit) |
|[`ft_isalpha`](https://github.com/marwan04/Libft/blob/main/ft_isalpha.c)|Checks if `c` is alphabetic character.       |
|[`ft_isdigit`](https://github.com/marwan04/Libft/blob/main/ft_isdigit.c)|`-- is en-dash, --- is em-dash`| Checks if `c` is digit (0 - 9). |
|[`ft_isascii`](https://github.com/marwan04/Libft/blob/main/ft_isascii.c)|Checks if `c` fits into the ASCII character set. |
|[`ft_isprint`](https://github.com/marwan04/Libft/blob/main/ft_isprint.c)|Checks if `c` is a printable character. |
|[`ft_toupper`](https://github.com/marwan04/Libft/blob/main/ft_toupper.c)|Converts the `c` to uppercase.|
|[`ft_tolower`](https://github.com/marwan04/Libft/blob/main/ft_tolower.c)|Converts the `c` to lowercase.|

	 
#### 2.  String functions

|     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_strlen`](https://github.com/marwan04/Libft/blob/main/ft_strlen.c)|Find the length of the string|
|[`ft_strlcpy`](https://github.com/marwan04/Libft/blob/main/ft_strlcpy.c)|Size-bounded string copying|
|[`ft_strlcat`](https://github.com/marwan04/Libft/blob/main/ft_strlcat.c)|Size-bounded string concatenation|
|[`ft_strchr`](https://github.com/marwan04/Libft/blob/main/ft_strchr.c)|Locate the first occurrence character in the string|
|[`ft_strrchr`](https://github.com/marwan04/Libft/blob/main/ft_strrchr.c)|Locate the last occurrence character in the string|
|[`ft_strncmp`](https://github.com/marwan04/Libft/blob/main/ft_strncmp.c)|Size-bounded string comparing|
|[`ft_strnstr`](https://github.com/marwan04/Libft/blob/main/ft_strnstr.c)|Locate a sub-string in a string|
|[`ft_substr`](https://github.com/marwan04/Libft/blob/main/ft_substr.c)|Extract sub-string from a string|
|[`ft_strjoin`](https://github.com/marwan04/Libft/blob/main/ft_strjoin.c)|Concatenate two strings into a new string using malloc|
|[`ft_strdup`](https://github.com/marwan04/Libft/blob/main/ft_strdup.c)|Save a copy of a string using malloc|
|[`ft_strtrim`](https://github.com/marwan04/Libft/blob/main/ft_strtrim.c)|Trim the beginning and end of the string with the specified characters|
|[`ft_split`](https://github.com/marwan04/Libft/blob/main/ft_split.c)|Split string with specified character as delimiter|
|[`ft_strmapi`](https://github.com/marwan04/Libft/blob/main/ft_strmapi.c)|Create a new string by modifying the string with a specified function|
|[`ft_striteri`](https://github.com/marwan04/Libft/blob/main/ft_striteri.c)|Iterates through a string enabling character and index manipulation|

 #### 3. Memory Functions
 |     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_calloc`](https://github.com/marwan04/Libft/blob/main/ft_calloc.c)|Memory allocation|
|[`ft_memset`](https://github.com/marwan04/Libft/blob/main/ft_memset.c)|Write a byte to byte string|
|[`ft_bzero`](https://github.com/marwan04/Libft/blob/main/ft_bzero.c)|Write zeroes to a byte string|
|[`ft_memcpy`](https://github.com/marwan04/Libft/blob/main/ft_memcpy.c)|Copy memory area|
|[`ft_memmove`](https://github.com/marwan04/Libft/blob/main/ft_memmove.c)|Copy byte string|
|[`ft_memchr`](https://github.com/marwan04/Libft/blob/main/ft_memchr.c)|Locate byte in byte string|
|[`ft_memcmp`](https://github.com/marwan04/Libft/blob/main/ft_memcmp.c)|Compare byte string|

#### 4. Number Functions
|     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_atoi`](https://github.com/marwan04/Libft/blob/main/ft_atoi.c)|Convert the ASCII string to an integer|
|[`ft_itoa`](https://github.com/marwan04/Libft/blob/main/ft_itoa.c)|Convert integer to ASCII string|

#### 5. Write to a file descriptor
|     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_putchar_fd`](https://github.com/marwan04/Libft/blob/main/ft_putchar_fd.c)|Convert the ASCII string to an integer|
|[`ft_putstr_fd`](https://github.com/marwan04/Libft/blob/main/ft_putstr_fd.c)|Convert integer to ASCII string|
|[`ft_putendl_fd`](https://github.com/marwan04/Libft/blob/main/ft_putendl_fd.c)|Convert the ASCII string to an integer|
|[`ft_putnbr_fd`](https://github.com/marwan04/Libft/blob/main/ft_putnbr_fd.c)|Convert integer to ASCII string|

#### 6. Linked list Functions
|     Function                                                           | Descriptions                                 
|----------------|------------------------------------------------------------
|[`ft_lstnew`](https://github.com/marwan04/Libft/blob/main/ft_lstnew_bonus.c)|Create new list|
|[`ft_lstadd_front`](https://github.com/marwan04/Libft/blob/main/ft_lstadd_front_bonus.c)|Add a new element at the beginning of the list|
|[`ft_lstadd_back`](https://github.com/marwan04/Libft/blob/main/ft_lstadd_back_bonus.c)|Add a new element at the end of the list|
|[`ft_lstsize`](https://github.com/marwan04/Libft/blob/main/ft_lstsize_bonus.c)|Count the element in the list|
|[`ft_lstlast`](https://github.com/marwan04/Libft/blob/main/ft_lstlast_bonus.c)|Find the last element in the list|
|[`ft_lstdelone`](https://github.com/marwan04/Libft/blob/main/ft_lstdelone_bonus.c)|Delete element from the list|
|[`ft_lstclear`](https://github.com/marwan04/Libft/blob/main/ft_lstclear_bonus.c)|Delete the sequence of elements of the list from a starting point|
|[`ft_lstiter`](https://github.com/marwan04/Libft/blob/main/ft_lstiter_bonus.c)|Apply function to the content of all list elements|
|[`ft_lstmap`](https://github.com/marwan04/Libft/blob/main/ft_lstmap_bonus.c)|Apply function to the content of all list elements into a new list|
