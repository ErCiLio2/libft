# libft

Biblioteca C própria do projeto **libft** da 42: reimplementação de funções da libc e de algumas funções utilitárias adicionais, compiladas numa biblioteca estática (`libft.a`).

## Compilação

```sh
make        # compila e gera libft.a
make clean  # remove os ficheiros objeto
make fclean # remove objetos e libft.a
make re     # recompila tudo do zero
```

Flags utilizadas: `cc -Wall -Wextra -Werror`.

## Utilização

Incluir o header e ligar a biblioteca:

```c
#include "libft.h"
```

```sh
cc main.c -L. -lft -o programa
```

## Funções

### Verificação de caracteres
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

### Strings
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`

### Memória
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

### Funções adicionais
| Função | Descrição |
| --- | --- |
| `ft_substr` | Extrai uma substring de uma string |
| `ft_strjoin` | Concatena duas strings numa nova string |
| `ft_strtrim` | Remove de ambas as pontas os caracteres de um conjunto |
| `ft_split` | Divide uma string por um delimitador |
| `ft_itoa` | Converte um inteiro em string |
| `ft_strmapi` | Aplica uma função a cada caractere, criando uma nova string |
| `ft_striteri` | Aplica uma função a cada caractere (com índice), in-place |

### Output em file descriptor
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Autor

eteixeir — 42
