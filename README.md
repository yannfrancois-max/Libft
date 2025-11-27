*This project has been created as part of the 42 curriculum by yafranco*
************************************************************************

## Description

C programming can be quite tedious without access to the highly useful standard functions.\
This project aims to help us understand how these functions work by implementing them ourselves and learning to use them effectively. We did create our own library, which will be valuable for our future C school assignments.

## Instructions

## Compilation

To compile the library, simply run :\
`make`\
To clean the library, you can run :\
`make clean`\
`make fclean`\
`make re`\
To use the library, include on top :\
`#include "libft.h"`\
To link the library when compiling :\
`gcc main.c -L. -lft`\
or with the full path :\
`gcc main.c /path/to/libft.a`

## Ressources

**Documentation**

man: memset, memcpy, calloc, strlcpy, isalpha, etc.\
ISO C standard references\
GCC and GNU libc documentation\
"Beej’s Guide to C Programming"\
42 subject PDF (libft.en.pdf)

**How AI Was Used**

AI was used only for:
* Structuring and formatting this README
* Summarizing function categories
* Clarifying documentation and wording
* Improving explanations and layout

AI was not used to:
* Implement functions
* Debug algorithmic logic
* Solve project requirements
* All code was written manually following 42 rules.

## Feature list

**1. Simple Functions**

Basic character, string, and memory operations:
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_strlen
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_strlcpy
* ft_strlcat
* ft_toupper
* ft_tolower
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_memchr
* ft_memcmp
* ft_strnstr
* ft_atoi

**2. Functions Using malloc**

Dynamic memory allocation utilities:
* ft_calloc
* ft_strdup

**3. Additional Functions**

Higher-level utilities for strings, numbers, and output:
* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

**4. Linked List Functions**

Singly linked list creation, manipulation, and iteration:
* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

## Design Choices

Functions mimic standard C library behavior whenever possible.\
Memory allocations return NULL on failure.\
No external libraries are used.\
All functions follow 42's formatting, error handling, and memory rules.\
The linked list API is generic, using void *content and user-defined deletion functions.

## Limitations

Exact behavior may differ subtly from the C standard in undefined cases.\
The library does not protect against invalid pointers passed by the user.

## Feature Table

**Category**\
| Function          | Purpose                                                  \
**Character Checks**\
| `ft_isalpha`		| Check if character is alphabetic                         \
| `ft_isdigit`		| Check if character is a digit                            \
| `ft_isalnum`      | Check if character is alphanumeric                       \
| `ft_isascii`      | Check if character is valid ASCII                        \
| `ft_isprint`      | Check if character is printable                          \
**Character Conversion**\
| `ft_toupper`      | Convert character to uppercase                           \
| `ft_tolower`      | Convert character to lowercase                           \
**String Operations**\
| `ft_strlen`       | Get string length                                        \
| `ft_strchr`       | Find first occurrence of character in string             \
| `ft_strrchr`      | Find last occurrence of character in string              \
| `ft_strncmp`      | Compare two strings up to n characters                   \
| `ft_strnstr`      | Locate a substring in a string                           \
| `ft_strlcpy`      | Copy string with size limit                              \
| `ft_strlcat`      | Concatenate strings safely                               \
**Memory Operations**\
| `ft_memset`       | Fill memory with a constant value                        \
| `ft_bzero`        | Zero out memory                                          \
| `ft_memcpy`       | Copy memory block                                        \
| `ft_memmove`      | Copy memory safely (overlap-safe)                        \
| `ft_memchr`       | Search memory for a byte                                 \
| `ft_memcmp`       | Compare memory blocks                                    \
**Converters**\
| `ft_atoi`         | Convert string to integer                                \
| `ft_itoa`         | Convert integer to string                                \
**Malloc-Based Functions**\
| `ft_calloc`       | Allocate zero-initialized memory                         \
| `ft_strdup`       | Duplicate a string with malloc                           \
**Higher-Level String Functions**\
| `ft_substr`       | Extract substring                                        \
| `ft_strjoin`      | Concatenate two strings                                  \
| `ft_strtrim`      | Trim characters from start and end                       \
| `ft_split`        | Split string into an array by delimiter                  \
| `ft_strmapi`      | Apply function to string characters (returns new string) \
| `ft_striteri`     | Apply function to string characters (in place)           \
**File Descriptor Output**\
| `ft_putchar_fd`   | Write a char to fd                                       \
| `ft_putstr_fd`    | Write a string to fd                                     \
| `ft_putendl_fd`   | Write a string + newline to fd                           \
| `ft_putnbr_fd`    | Write an integer to fd                                   \
**Linked List — Creation & Info**\
| `ft_lstnew`       | Create new list node                                     \
| `ft_lstsize`      | Count elements in list                                   \
| `ft_lstlast`      | Get last element                                         \
**Linked List — Modification**\
| `ft_lstadd_front` | Add node at beginning                                    \
| `ft_lstadd_back`  | Add node at end                                          \
**Linked List — Deletion & Iteration**\
| `ft_lstdelone`    | Delete node using a custom `del` function                \
| `ft_lstclear`     | Delete full list                                         \
| `ft_lstiter`      | Apply function to each node                              \
| `ft_lstmap`       | Map list to new list (with malloc)                       

*Thanks for reading my README.md file. It means a lot to me.*

