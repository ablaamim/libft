---

## :book: LIBFT-42 :

---

</p>
<p align="center">
<img src="https://github.com/ablaamim/LIBFT-42/blob/main/ressources/libftm.png" width="150">
</p>

---

## :coffee: Artistic view of LIBFT :

---

</p>
<p align="center">
<img src="https://www.iamsterdam.com/media/locations-ndtrc/museums/rijksmuseum-library-cc-bynd-20-hans-splinter-via-flickr.jpg?w=977" width="800">
</p>

---

## :performing_arts: HOW DOES IT FEEL HAVING YOUR OWN LIB:

---

</p>
<p aign="center">
<img src="http://2.bp.blogspot.com/-bBJeRPdPd9M/UfYBsNF2ffI/AAAAAAAADnk/_qqet8O6rvo/s1600/library%2Bcard2.gif" width="800">
</p>

---

## SUBJECT :

---

:book: [ENGLISH PDF](https://github.com/alaamimi/LIBFT-42/blob/main/en.subject.pdf)

---

## :information_source: What is LIBFT :

---

</p>
<p align="center">
<img src="https://github.com/ablaamim/libft/blob/main/ressources/Libft.png" width="500">
</p>

>This project aims to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.

---

## :wrench: MANDATORY :

---

<h3 align=center>
Part 1
</h3>

</p>
<p aign="center">
<img src="https://media3.giphy.com/media/PiQejEf31116URju4V/giphy.gif?cid=790b76118ba41a4e1b4161c3938a263d41c72d85f85788ca&amp;rid=giphy.gif&amp;ct=g" width="800">
</p>

> <i>In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.</i>

<p align=center>

| %  | FUNCTIONS| Allowed functions | Prototype |
|--- |---		|---                |---        |
|	 | [isalpha()](https://github.com/ablaamim/libft/blob/main/ft_isalpha.c)  | NONE				| int	ft_isalpha (int	c) |
|	 | [isdigit()](https://github.com/ablaamim/libft/blob/main/ft_isdigit.c)  | NONE				| int	ft_isdigit (int	c) |
|	 | [isalnum()](https://github.com/ablaamim/libft/blob/main/ft_isalnum.c)  | NONE				| int	ft_isalnum (int	c) |
|    | isascii()  | NONE				|
|    | isprint()  | NONE				|
|    | strlen()   | NONE				|
|    | memset() | NONE				|
|    | bzero()  | NONE				|
|    | memcpy() | NONE				|
|	 | memmove()  | NONE				|
|	 | strlcpy()  | NONE				|
|	 | strlcat()  | NONE				|
|	 | toupper()  | NONE				|
|	 | tolower()  | NONE				|
|	 | strchr()   | NONE				|
|	 | strrchr()  | NONE				|
|	 | strncmp()  | NONE				|
|	 | memchr()   | NONE				|
|	 | memcmp()   | NONE				|
|	 | strnstr()  | NONE				|
|	 | atoi()     | NONE				|

</p>

> You must also re-code the following functions, using the function “malloc”:

| % |  FUNCTIONS | ALLOWED FUNCTIONS |
|--- |---        |---                |
|    |  calloc()   |   malloc()      |
|    |  strdup()   |  malloc()       |

---

## :wrench: :factory: ADDITIONAL FUNCTIONS :

---

<h3 align=center>
Part 2
</h3>

> <i>In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.</i>

<p align=center>

• substr

• strjoin

• strtrim

• split

• itoa

• strmapi

• striteri

• putchar_fd

• putstr_fd

• putendl_fd

• putnbr_fd

</p>

---

## :wrench: :white_check_mark: BONUS :

---

<h3 align=center>
</h3>

> <i>The following functions will allow you to easily use your lists.</i>
<p align=center>

• lstnew

• lstadd_front

• lstsize

• lstlast

• lstadd_back

• lstdelone

• lstclear

• lstiter

• lstmap

</p>

---

### Header file :

---

- [`libft.h`]	- contains all prototypes of functions and structures

---

### Functions from `<ctype.h>` :

---

- [`ft_isalpha`]	- checks  for  an  alphabetic  character
- [`ft_isdigit`]	- checks for a digit (0 through 9).
- [`ft_isalnum`]	- checks for an alphanumeric character
- [`ft_isascii`]	- checks whether c fits into the ASCII character set
- [`ft_isprint`]	- checks for any printable character
- [`ft_toupper`]	- convert char to uppercase
- [`ft_tolower`]	- convert char to lowercase

---

### Functions from `<string.h>` :

---

- [`ft_memset`]	- fill memory with a constant byte
- [`ft_strlen`]	- calculate the length of a string
- [`ft_bzero`]	- zero a byte string
- [`ft_memcpy`]	- copy memory area
- [`ft_memmove`]	- copy memory area
- [`ft_strlcpy`]	- copy string to an specific size
- [`ft_strlcat`]	- concatenate string to an specific size
- [`ft_strchr`]	- locate character in string (first occurrence)
- [`ft_strrchr`]	- locate character in string (last occurrence)
- [`ft_strncmp`]	- compare n bytes of two strings
- [`ft_memchr`]	- scan memory for a character
- [`ft_memcmp`]	- compare memory areas
- [`ft_strnstr`]	- locate a substring in a string
- [`ft_strdup`]	- duplicate a string.

---

### Functions from `<stdlib.h>` :

---

- [`ft_atoi`]	- convert a string to an integer
- [`ft_calloc`]	- allocate memory by filling it with zeros

---

### Non-standard functions :

---

- [`ft_substr`]	- returns a substring from a string
- [`ft_strjoin`]	- concatenates two strings
- [`ft_strtrim`]	- trims the beginning and end of string with specific set of chars
- [`ft_split`]	- splits a string using a char as parameter
- [`ft_itoa`]	- converts a number into a string
- [`ft_strmapi`]	- applies a function to each character of a string
- [`ft_striteri`]	- applies a function to each character of a string
- [`ft_putchar_fd`]	- output a char to a file descriptor
- [`ft_putstr_fd`]	- output a string to a file descriptor
- [`ft_putendl_fd`]	- output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`]	- output a number to a file descriptor

---

### Linked list functions :

---

- [`ft_lstnew`]	- creates a new list element
- [`ft_lstadd_front`]	- adds an element at the beginning of a list
- [`ft_lstsize`]	- counts the number of elements in a list
- [`ft_lstlast`]	- returns the last element of the list
- [`ft_lstadd_back`]	- adds an element at the end of a list
- [`ft_lstclear`]	- deletes and free list
- [`ft_lstiter`]	- applies a function to each element of a list
- [`ft_lstmap`]	- applies a function to each element of a list

---
