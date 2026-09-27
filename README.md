*This project has been created as part of the 42 curriculum by yafranco*
************************************************************************

# Libft

## Overview

A lightweight, robust implementation of standard C library functions, system utilities, and dynamic data structures.

Built in C to ISO/IEC 9899 standards with strict manual memory management, zero memory leaks, and POSIX compliance.

---

In systems programming, standard utility functions must be reliable, memory-safe, and predictable. **Libft** provides a clean, dependency-free foundational C library featuring reimplementations of libc standard operations alongside extended utilities for string manipulation, file descriptor I/O, and linked data structures.

### Key Highlights
- **Strict Memory Safety**: Zero leaks, verified with Valgrind. Clean error propagation returning `NULL` or error codes on allocation failures.
- **No External Dependencies**: Pure standalone C relying solely on kernel-level system calls (`write`, `malloc`, `free`).
- **Standardized Build**: Automated compilation into an archive (`libft.a`) via a strict `Makefile` adhering to standard flags (`-Wall -Wextra -Werror`).

---

## Getting Started

### Compilation
Compile the static library :
```bash
make
```

Clean build artifacts:
```bash
make clean   # Removes object files (.o)
make fclean  # Removes object files and libft.a
make re      # Performs a complete rebuild
```

### Usage
Include the header in your C source files:
```c
#include "libft.h"
```

Compile your program by linking against libft.a:
```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Module Directory

| Module | Key Functions | Description |
| :--- | :--- | :--- |
| **Memory Operations** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Low-level memory manipulation, overlap-safe buffer copying, and memory inspection. |
| **Dynamic Memory** | `ft_calloc`, `ft_strdup` | Safe heap allocation with automatic zero-initialization and string cloning. |
| **String Manipulation** | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Size-bounded, truncation-safe string copying, concatenation, and searching. |
| **Advanced Strings** | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` | Heap-allocated string transformations, array splitting by delimiter, and functional mapping. |
| **Type Conversion** | `ft_atoi`, `ft_itoa` | Numerical parsing (string to integer) and formatting (integer to string) with overflow handling. |
| **Character Checks** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` | ASCII character classification and case conversions. |
| **File Descriptor I/O** | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Direct unbuffered output streaming to specified file descriptors (`stdout`, `stderr`, files). |
| **Data Structures** | `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` | Generic singly linked list API using `void *` pointers with user-defined deletion and mapping logic. |

## Resources

**Documentation**

- `man`: `memset`, `memcpy`, `calloc`, `strlcpy`, `isalpha`, etc.
- ISO C standard references
- GCC and GNU libc documentation
- *Beej’s Guide to C Programming*

##  Design & Constraints
- Norm & Standards: Compiled with strict warning flags (-Wall -Wextra -Werror).
- Fail-Safe Design: All memory allocation calls check return values and safely clean up previously allocated memory blocks before returning failure states to prevent leaks.
- Edge Cases: Handles standard edge cases (e.g., overlapping buffers in memory copy handled via reverse traversal in ft_memmove).
