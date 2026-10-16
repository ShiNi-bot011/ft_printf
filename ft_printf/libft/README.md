# Libft

*This project has been created as part of the 42 curriculum by slai.*

---

## 📌 Description

**Libft** is the first project in the 42 curriculum.  
It requires recreating a small portion of the C standard library **from scratch**.

The goal is to learn:

- Low-level programming  
- Memory manipulation  
- Understanding how standard C library functions work  
- Clean code, debugging, and Norminette discipline

The library includes:

- **Libc functions** — re-implementations of common C standard functions  
  (`ft_strlen`, `ft_memcpy`, `ft_atoi`, etc.)
- **Additional utilities**  
  (`ft_split`, `ft_strjoin`, `ft_strtrim`, etc.)
- **Bonus linked list functions**  
  (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.)

---

## 🛠️ Instructions

### Compilation

To build the library:
```bash
make
```

To build with bonus linked list functions:
```bash
make bonus
```

### Cleaning

Remove object files:
```bash
make clean
```

Remove object files and the library:
```bash
make fclean
```

Full rebuild:
```bash
make re
```

---

## 📚 Usage

Include the header:
```c
#include "libft.h"
```

Compile and link the library:
```bash
gcc main.c -L. -lft -o my_program
```

---

## 📦 Library Contents

### Character checks
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### Memory functions
- `ft_memset`
- `ft_memcpy`
- `ft_memmove`
- `ft_memcmp`
- `ft_bzero`
- `ft_calloc`

### String functions
- `ft_strlen`
- `ft_strdup`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strncmp`
- `ft_strchr`
- `ft_strrchr`
- `ft_strnstr`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

### File descriptor output
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus: Linked list functions
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## 📖 Resources

- 42 Cursus Gitbook  
- Linux manual pages (`man 3 <function>`)  
- K&R — *The C Programming Language*  
- Online C references and documentation  

---

## 🤖 AI Usage

AI was used as a **learning assistant**, not a code generator.

AI helped with:

- Understanding edge cases and undefined behavior  
- Debugging strategies (tracing tables, human reasoning, edge-case simulation)  
- System programming concepts  
- Code formatting and Norminette compliance  
- Tools like `valgrind`, `gdb`, and compiler flags (`-Wall -Wextra -Werror`)  

I wrote all logic myself, and used AI only to **verify reasoning** and improve clarity.  
This project helped deepen my interest in low-level programming and code engineering.

---

