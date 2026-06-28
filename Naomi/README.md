*This project has been created as part of the 42 curriculum by inaomi-i*

# Libft

## Descrição

A Libft é uma reimplementação das principais funções da libc, além de incluir algumas funções adicionais que serão úteis em projetos futuros.

Seu principal objetivo é compreender como essas funções são implementadas internamente, permitindo o desenvolvimento de conhecimentos fundamentais como: ponteiros, manipulação de strings, gerenciamento de memória e estruturas de dados.

<br>

## Instruções

### Compilação

```bash
make
````

### Limpar arquivos objeto

```bash
make clean
```

### Remover tudo (incluindo a biblioteca)

```bash
make fclean
```

### Recompilar tudo do zero

```bash
make re
```

# Lista de Funções

## 🟢 Char (ctype)

### ft_isalpha
Verifica se o caractere é uma letra do alfabeto (A–Z ou a–z).
* **Protótipo:** `int ft_isalpha(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** `1` se for letra, `0` se não for.
---
### ft_isdigit
Verifica se o caractere é um dígito numérico (0–9).
* **Protótipo:** `int ft_isdigit(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** `1` se for dígito, `0` se não for.
---
### ft_isalnum
Verifica se o caractere é alfanumérico (letra ou número).
* **Protótipo:** `int ft_isalnum(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** `1` se for alfanumérico, `0` se não for.
---
### ft_isascii
Verifica se o caractere pertence à tabela ASCII (0–127).
* **Protótipo:** `int ft_isascii(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** `1` se estiver na ASCII, `0` se não for.
---
### ft_isprint
Verifica se o caractere é imprimível (incluindo espaço).
* **Protótipo:** `int ft_isprint(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** `1` se for imprimível, `0` se não for.
---
### ft_toupper
Converte uma letra minúscula para maiúscula, quando possível.
* **Protótipo:** `int ft_toupper(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** caractere convertido ou o mesmo caractere.
---
### ft_tolower
Converte uma letra maiúscula para minúscula, quando possível.
* **Protótipo:** `int ft_tolower(int c);`
* **Parâmetros:**
  * `c`: caractere a testar
* **Retorno:** caractere convertido ou o mesmo caractere.

<br>

# 🔵 String (leitura/análise)

### ft_strlen
Calcula o tamanho de uma string até o `\0`.
* **Protótipo:** `size_t ft_strlen(const char *s);`
* **Parâmetros:**
  * `s`: string a calcular
* **Retorno:** quantidade de caracteres.
---
### ft_strchr
Procura a primeira ocorrência de um caractere.
* **Protótipo:** `char *ft_strchr(const char *s, int c);`
* **Parâmetros:**
  * `s`: string
  * `c`: caractere a procurar
* **Retorno:** ponteiro para a ocorrência ou `NULL`.
---
### ft_strrchr
Procura a última ocorrência de um caractere.
* **Protótipo:** `char *ft_strrchr(const char *s, int c);`
* **Parâmetros:**
  * `s`: string
  * `c`: caractere a procurar
* **Retorno:** ponteiro para a última ocorrência ou `NULL`
---
### ft_strncmp
Compara duas strings até `n` caracteres.
* **Protótipo:** `int ft_strncmp(const char *s1, const char *s2, size_t n);`
* **Parâmetros:**
  * `s1`: primeira string
  * `s2`: segunda string
  * `n`: número máximo de caracteres
* **Retorno:** diferença entre os caracteres; 0 se forem iguais, valor positivo se s1 for maior, valor negativo se s1 for menor.
---
### ft_strnstr
Procura uma substring dentro de outra string com limite de busca.
* **Protótipo:** `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
* **Parâmetros:**
  * `haystack`: string principal
  * `needle`: substring a ser procurada
  * `len`: limite de busca
* **Retorno:** ponteiro para o início da substring ou `NULL`.

<br>

# 🔴 Parsing

### ft_atoi
Converte uma string em um número inteiro.
* **Protótipo:** `int ft_atoi(const char *str);`
* **Parâmetros:**
  * `str`: string
* **Retorno:** valor inteiro convertido.

<br>

# 🟡 Memória (bytes)

### ft_memset
Preenche uma área de memória com um valor específico.
* **Protótipo:** `void *ft_memset(void *s, int c, size_t n);`
* **Parâmetros:**
  * `s`: ponteiro p/ a memória que será modificada
  * `c`: valor que será preenchindo
  * `n`: número de bytes
* **Retorno:** ponteiro para a memória modificada.
---
### ft_bzero
Preenche uma área de memória com 0.
* **Protótipo:** `void ft_bzero(void *s, size_t n);`
* **Parâmetros:**
  * `s`: ponteiro p/ a memória que será modificada
  * `n`: número de bytes
---
### ft_memcpy
Copia memória de uma área para outra (sem sobreposição).
* **Protótipo:** `void *ft_memcpy(void *dst, const void *src, size_t n);`
* **Parâmetros:**
  * `dst`: destino
  * `src`: origem
  * `n`: número de bytes
* **Retorno:** ponteiro para o destino.
---
### ft_memmove
Copia memória com segurança mesmo com sobreposição.
* **Protótipo:** `void *ft_memmove(void *dst, const void *src, size_t n);`
* **Parâmetros:**
  * `dst`: destino
  * `src`: origem
  * `n`: número de bytes
* **Retorno:** ponteiro para o destino.
---
### ft_memcmp
Compara duas áreas de memória.
* **Protótipo:** `int ft_memcmp(const void *s1, const void *s2, size_t n);`
* **Parâmetros:**
  * `s1`: primeira área
  * `s2`: segunda área
  * `n`: número de bytes
* **Retorno:** diferença entre bytes ou `0`.
---
### ft_memchr
Procura um byte específico em uma área de memória.
* **Protótipo:** `void *ft_memchr(const void *s, int c, size_t n);`
* **Parâmetros:**
  * `s`: memória alvo
  * `c`: byte procurado
  * `n`: número de bytes
* **Retorno:** ponteiro para o byte encontrado ou `NULL`.

<br>

# ⚫ File Descriptor

### ft_putchar_fd
Escreve um caractere em um file descriptor.
* **Protótipo:** `void ft_putchar_fd(char c, int fd);`
* **Parâmetros:**
  * `c`: caractere
  * `fd`: file descriptor
* **Funções externas:** `write`
---
### ft_putstr_fd
Escreve uma string em um file descriptor.
* **Protótipo:** `void ft_putstr_fd(char *s, int fd);`
* **Parâmetros:**
  * `s`: string
  * `fd`: file descriptor
* **Funções externas:** `write`
---
### ft_putendl_fd
Escreve uma string seguida de newline.
* **Protótipo:** `void ft_putendl_fd(char *s, int fd);`
* **Parâmetros:**
  * `s`: string
  * `fd`: file descriptor
* **Funções externas:** `write`
---
### ft_putnbr_fd
Escreve um número em um file descriptor.
* **Protótipo:** `void ft_putnbr_fd(int n, int fd);`
* **Parâmetros:**
  * `n`: número
  * `fd`: file descriptor
* **Funções externas:** `write`

<br>

# 🟠 Malloc

### ft_calloc
Aloca memória e inicializa com zero.
* **Protótipo:** `void *ft_calloc(size_t nmemb, size_t size);`
* **Parâmetros:**
  * `nmemb`: número de elementos
  * `size`: tamanho de cada elemento
* **Retorno:** ponteiro para memória alocada ou `NULL`.
* **Funções externas:** `malloc`
---
### ft_strdup
Duplica uma string.
* **Protótipo:** `char *ft_strdup(const char *s);`
* **Parâmetros:**
  * `s`: string de entrada
* **Retorno:** nova string duplicada
* **Funções externas:** `malloc`, `ft_strlen`, `ft_memcpy`

<br>

# 🟣 String (criação/modificação)

### ft_strlcpy
Copia string com limite de tamanho.
* **Protótipo:** `size_t ft_strlcpy(char *dst, const char *src, size_t size);`
* **Parâmetros:**
  * `dst`: destino
  * `src`: origem
  * `size`: limite
* **Retorno:** tamanho da string de origem
---
### ft_strlcat
Concatena string com limite de tamanho.
* **Protótipo:** `size_t ft_strlcat(char *dst, const char *src, size_t size);`
* **Parâmetros:**
  * `dst`: destino
  * `src`: origem
  * `size`: limite total
* **Retorno:** tamanho total da string que tentaria ser criada
* **Funções externas:** `ft_strlen`
---
### ft_substr
Cria uma substring a partir de uma string.
* **Protótipo:** `char *ft_substr(char const *s, unsigned int start, size_t len);`
* **Parâmetros:**
  * `s`: string original
  * `start`: índice inicial
  * `len`: tamanho da substring
* **Retorno:** nova substring
* **Funções externas:** `malloc`, `ft_strlen`, `ft_strlcpy`
---
### ft_strjoin
Concatena duas strings em uma nova string.
* **Protótipo:** `char *ft_strjoin(char const *s1, char const *s2);`
* **Parâmetros:**
  * `s1`: primeira string
  * `s2`: segunda string
* **Retorno:** nova string concatenada
* **Funções externas:** `malloc`
---
### ft_strtrim
Remove caracteres do início e fim de uma string.
* **Protótipo:** `char *ft_strtrim(char const *s1, char const *set);`
* **Parâmetros:**
  * `s1`: string original
  * `set`: conjunto de caracteres a remover
* **Retorno:** nova string aparada
* **Funções externas:** `malloc`
---
### ft_itoa
Converte um inteiro para string.
* **Protótipo:** `char *ft_itoa(int n);`
* **Parâmetros:**
  * `n`: número inteiro
* **Retorno:** string representando o número
* **Funções externas:** `malloc`
---
### ft_split
Divide uma string em várias substrings com base em um delimitador.
* **Protótipo:** `char **ft_split(char const *s, char c);`
* **Parâmetros:**
  * `s`: string original
  * `c`: delimitador
* **Retorno:** array de strings
* **Funções externas:** `malloc`, `ft_substr`, `ft_calloc`

<br>

# 🟣 String (iterações)

### ft_strmapi
Aplica uma função a cada caractere e retorna uma nova string.
* **Protótipo:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
* **Parâmetros:**
  * `s`: string original
  * `f`: função aplicada
* **Retorno:** nova string
* **Funções externas:** `malloc`, `ft_strlen`
---
### ft_striteri
Aplica uma função a cada caractere da string (modifica original).
* **Protótipo:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
* **Parâmetros:**
  * `s`: string original
  * `f`: função aplicada

<br>

# 🟤 Linked List

### ft_lstnew
Cria um novo nó de lista encadeada.
* **Protótipo:** `t_list *ft_lstnew(void *content);`
* **Parâmetros:**
  * `content`: conteúdo do nó
* **Retorno:** novo nó
* **Funções externas:** `malloc`
---
### ft_lstadd_front
Adiciona um nó no início da lista.
* **Protótipo:** `void ft_lstadd_front(t_list **lst, t_list *new);`
* **Parâmetros:**
  * `lst`: lista
  * `new`: novo nó
---
### ft_lstsize
Conta o número de nós da lista.
* **Protótipo:** `int ft_lstsize(t_list *lst);`
* **Parâmetros:**
  * `lst`: lista
* **Retorno:** tamanho da lista
---
### ft_lstlast
Retorna o último nó da lista.
* **Protótipo:** `t_list *ft_lstlast(t_list *lst);`
* **Parâmetros:**
  * `lst`: lista
* **Retorno:** último nó
---
### ft_lstadd_back
Adiciona um nó no final da lista.
* **Protótipo:** `void ft_lstadd_back(t_list **lst, t_list *new);`
* **Parâmetros:**
  * `lst`: lista
  * `new`: novo nó
* **Funções externas:** `ft_lstlast`
---
### ft_lstdelone
Remove e libera um nó da lista.
* **Protótipo:** `void ft_lstdelone(t_list *lst, void (*del)(void *));`
* **Parâmetros:**
  * `lst`: nó
  * `del`: função de liberação
* **Funções externas:** `free`
---
### ft_lstclear
Libera toda a lista.
* **Protótipo:** `void ft_lstclear(t_list **lst, void (*del)(void *));`
* **Parâmetros:**
  * `lst`: lista
  * `del`: função de liberação
* **Funções externas:** `ft_lstdelone`
---
### ft_lstiter
Aplica uma função em cada nó da lista.
* **Protótipo:** `void ft_lstiter(t_list *lst, void (*f)(void *));`
* **Parâmetros:**
  * `lst`: lista
  * `f`: função aplicada
---
### ft_lstmap
Cria uma nova lista aplicando uma função em cada nó.
* **Protótipo:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
* **Parâmetros:**
  * `lst`: lista original
  * `f`: função transformadora
  * `del`: função de limpeza
* **Retorno:** nova lista
* **Funções externas:** `ft_lstnew`, `ft_lstclear`, `ft_lstadd_back`

## Recursos

### Documentação e referências

[DevDocs C Reference](https://devdocs.io/c/?utm_source=chatgpt.com)

[cppreference C](https://cppreference.com/c?utm_source=chatgpt.com)

[Man7 Linux Man Pages](https://man7.org/linux/man-pages/index.html?utm_source=chatgpt.com)


### Uso de IA

A inteligência artificial foi utilizada como ferramenta de apoio para:
- Planejamento da ordem de implementação das funções com base em dependências e complexidade, garantindo uma progressão lógica de desenvolvimento.
- Auxílio na clareza da documentação
- Transformação de conteúdo técnico em representações visuais para facilitar a compreensão dos conceitos

A IA não foi utilizada para implementação das funções da biblioteca.
