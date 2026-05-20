# Libft

Libft è una libreria C personalizzata sviluppata come primo progetto del cursus di 42.
Il progetto consiste nel ricreare alcune funzioni standard della libc, insieme a utility aggiuntive e funzioni per la gestione di liste concatenate.

---

## 📚 Contenuti

* [Introduzione](#introduzione)
* [Funzioni implementate](#funzioni-implementate)
* [Compilazione](#compilazione)
* [Utilizzo](#utilizzo)
* [Bonus](#bonus)
* [Struttura del progetto](#struttura-del-progetto)

---

# Introduzione

L’obiettivo di Libft è costruire una libreria personale in C che possa essere riutilizzata nei progetti successivi del cursus 42.

La libreria include:

* Reimplementazioni di funzioni standard della libc
* Funzioni aggiuntive per manipolazione di stringhe e memoria
* Utility di output
* Gestione di liste concatenate (`t_list`)

---

# Funzioni implementate

## 🔹 Funzioni libc

| Funzione   |
| ---------- |
| ft_isalpha |
| ft_isdigit |
| ft_isalnum |
| ft_isascii |
| ft_isprint |
| ft_strlen  |
| ft_memset  |
| ft_bzero   |
| ft_memcpy  |
| ft_memmove |
| ft_strlcpy |
| ft_strlcat |
| ft_toupper |
| ft_tolower |
| ft_strchr  |
| ft_strrchr |
| ft_strncmp |
| ft_memchr  |
| ft_memcmp  |
| ft_atoi    |
| ft_calloc  |
| ft_strdup  |

---

## 🔹 Funzioni aggiuntive

| Funzione      |
| ------------- |
| ft_substr     |
| ft_strjoin    |
| ft_strtrim    |
| ft_split      |
| ft_itoa       |
| ft_strmapi    |
| ft_striteri   |
| ft_putchar_fd |
| ft_putstr_fd  |
| ft_putendl_fd |
| ft_putnbr_fd  |

---

## 🔹 Bonus — Linked List

| Funzione        |
| --------------- |
| ft_lstnew       |
| ft_lstadd_front |
| ft_lstsize      |
| ft_lstlast      |
| ft_lstadd_back  |
| ft_lstdelone    |
| ft_lstclear     |
| ft_lstiter      |
| ft_lstmap       |

---

## 🔹 Funzioni Extra

Queste funzioni non fanno parte della subject ufficiale moderna ma sono incluse nella libreria:

| Funzione   |
| ---------- |
| ft_putchar |
| ft_putstr  |
| ft_putendl |
| ft_putnbr  |
| ft_strcmp  |
| ft_strcpy  |
| ft_strncpy |
| ft_strcat  |
| ft_strncat |
| ft_striter |
| ft_strmap  |
| ft_memccpy |

---

# Compilazione

Compila la libreria usando `make`:

```bash
make
```

Compila con i bonus:

```bash
make bonus
```

Rimuovi file oggetto:

```bash
make clean
```

Rimuovi file oggetto e libreria:

```bash
make fclean
```

Ricompila tutto:

```bash
make re
```

---

# Utilizzo

Include l’header nel tuo progetto:

```c
#include "libft.h"
```

Compila includendo la libreria:

```bash
gcc main.c -L. -lft
```

---

# Bonus

La parte bonus introduce una struttura lista concatenata:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Le funzioni bonus permettono:

* Creazione nodi
* Inserimento in testa/coda
* Iterazione
* Mapping
* Eliminazione sicura della lista

---

# Struttura del progetto

```text
libft/
├── Makefile
├── libft.h
├── libft.a
├── ft_*.c
├── ft_*.o
└── README.md
```

---

# Note

* Tutte le funzioni sono scritte secondo la Norminette di 42
* Nessuna funzione libc vietata è stata utilizzata
* Il progetto è compilato con:

```bash
cc -Wall -Wextra -Werror
```

---

# Autore

Progetto sviluppato come parte del cursus di 42.
