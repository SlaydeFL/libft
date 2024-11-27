# Libft - 42 School Project  

**Libft** is a foundational project from 42 School that involves recreating key functions from the standard C library, along with adding additional utilities to build a custom and reusable library. This project is designed to strengthen the understanding of C, memory management, and data structures.

---

## 📝 Project Overview

The goal of this project is to create a personal library containing a set of functions commonly used in various C projects. These functions handle string operations, memory management, conversions, and even linked list manipulations.

### Key Features
- **Mandatory Part**:
  - Reimplementation of standard library functions (`ft_strlen`, `ft_strncmp`, etc.).
  - Memory management functions (`ft_memset`, `ft_calloc`, etc.).
  - Conversion utilities (`ft_atoi`, `ft_itoa`, etc.).
- **Bonus Part**:
  - Functions for handling linked lists (`ft_lstnew`, `ft_lstadd_front`, `ft_lstdelone`, etc.).

### Objectives
- Write clean and maintainable C code following strict coding standards.
- Reproduce the behavior of standard library functions.
- Explore and implement linked list operations.

---

## 📂 Project Structure

```plaintext
.
├── libft.h             # Header file with all function prototypes.
├── Makefile            # Build system for compiling the library.
├── src/                # Directory with function implementations.
│   ├── ft_mem*.c       # Memory management functions.
│   ├── ft_str*.c       # String manipulation functions.
│   ├── ft_lst*.c       # Linked list functions (bonus).
```

---

## ⚙️ Compilation

To compile the library, use the following command:

```bash
make
```

This generates a `libft.a` file, which can be linked to other projects using the `-L` flag to specify the library path and `-l` to link it.

### Available Commands:
- `make` : Compiles the library.
- `make bonus` : Compiles the library with bonus.
- `make clean` : Removes object files.
- `make fclean` : Removes object files and the library.
- `make re` : Recompiles the library from scratch.

---

## 📚 Usage

To use the library in your projects, include the `libft.h` header file in your source files and link the library during compilation:

```bash
gcc -L. -lft -o my_program my_program.c
```

---

## 🚀 Progress

- [x] Mandatory part
- [x] Bonus part (linked lists)

---

## 📜 42 Norms

This project strictly adheres to the **42 coding standards**, which include:
- Functions limited to 25 lines.
- Proper error handling.
- Prohibition of unauthorized standard library functions.

---
