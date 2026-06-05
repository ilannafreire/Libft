*This project has been created as part of the 42 curriculum by ifreire*

# Libft

## Description

Libft is a custom C library that reimplements essential libc functions and adds
utility functions frequently used in the 42 curriculum.

The main goal of this project is to build strong C foundations by understanding
low-level memory handling, string processing, file descriptor output, and linked
list manipulation.

The library is compiled into a static archive named `libft.a` and can be reused
in later projects.

## Instructions

### Requirements

- Compiler: `cc`
- Build flags: `-Wall -Wextra -Werror`
- Build tool: `make`

### Build

```bash
make
```

This compiles all source files and creates `libft.a` at the repository root.

### Available Makefile Rules

- `make` or `make all`: build `libft.a`
- `make clean`: remove object files
- `make fclean`: remove object files and `libft.a`
- `make re`: rebuild from scratch (`fclean` + `all`)

### Use in Another Project

1. Include the header in your source file:

```c
#include "libft.h"
```

2. Compile and link with the static library:

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

## Library Details

This library contains the following groups of functions.

### Part 1 - Libc Reimplementations

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String and memory: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`,
	`ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`,
	`ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`
- Case conversion: `ft_toupper`, `ft_tolower`
- Dynamic allocation helpers: `ft_calloc`, `ft_strdup`

### Part 2 - Additional Functions

- String creation/manipulation:
	`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
	`ft_strmapi`, `ft_striteri`
- File descriptor output:
	`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked List Functions

The project defines:

```c
typedef struct s_list
{
		void            *content;
		struct s_list   *next;
}   t_list;
```

Linked list API:

- Node creation and insertion:
	`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- Navigation and size:
	`ft_lstsize`, `ft_lstlast`
- Deletion and cleanup:
	`ft_lstdelone`, `ft_lstclear`
- Iteration and mapping:
	`ft_lstiter`, `ft_lstmap`

## Resources

### References

- 42 subject PDF for Libft (project specification)
- Linux man pages (`man 3`):
	`malloc`, `free`, `write`, `memcpy`, `strlcpy`, `strlcat`, etc.
- The Open Group Base Specifications (POSIX):
	https://pubs.opengroup.org/
- cppreference (C standard library reference):
	https://en.cppreference.com/w/c

### AI Usage

AI was used only as a support tool for:

- Reviewing README structure against the subject requirements
- Improving wording clarity in documentation

AI was not used as a shortcut to replace understanding of the project logic.