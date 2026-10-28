*This project has been created as part of the 42 Curriculim by vaperron*

# DESCRIPTION

libft is the first 42schools project from the common core, made as a personal library that will be able to be used later for other projects, that helps streamline the coding process, due to the prohibition of many standard functions in C. 

# INSTRUCTIONS

Compiling:
``` 
make
```
deleting leftover files: 
```
make clean
```
deleting all files created with Makefile: 
```
make fclean
```
recompiling: 
```
make re
```

# RESOURCES

https://www.ascii-code.com/
https://www.w3schools.com/c/ref_ctype_isalpha.php
https://www.geeksforgeeks.org/c/c-program-for-inserting-a-node-in-a-linked-list/
https://www.geeksforgeeks.org/dsa/linked-list-data-structure/

terminal man page

Gemini AI was used for pdf instructions clarifications and for edge case & memory leak patching and corrections in conjunction with libftTester


# LIBFT FUNCTIONS:

Conversions and Parsing

    ft_atoi: Converts a string to an integer (similar to standard atoi), handling leading whitespace, optional signs (+/-), and digit conversions.

    ft_itoa: Converts an integer to a newly allocated string representation, handling negative numbers and minimum/maximum integer bounds.

Character Checks & Manipulation

    ft_isalnum: Checks whether a character is alphanumeric (either a letter or a digit).

    ft_isalpha: Checks whether a character is an alphabetic letter (uppercase or lowercase).

    ft_isascii: Checks if a character falls within the 7-bit ASCII character set (0 to 127).

    ft_isdigit: Checks if a character is a decimal digit (0 through 9).

    ft_isprint: Checks whether a character is printable, including spaces.

    ft_tolower: Converts an uppercase letter to its lowercase equivalent.

    ft_toupper: Converts a lowercase letter to its uppercase equivalent.

Memory Management & Operations

    ft_bzero: Sets the first n bytes of the memory area pointed to by s to zero ('\0').

    ft_calloc: Allocates memory for an array of nmemb elements of a given size bytes each, initializes the allocated memory to zero, and returns a pointer to it.

    ft_memchr: Scans the first n bytes of the memory area pointed to by s for the first occurrence of a specific character c.

    ft_memcmp: Compares the first n bytes of two memory areas (s1 and s2).

    ft_memcpy: Copies n bytes from a source memory area to a destination memory area (assumes non-overlapping memory).

    ft_memmove: Copies n bytes from source to destination, safely handling overlapping memory regions.

    ft_memset: Fills the first n bytes of the memory area pointed to by s with a constant byte c.

String Manipulation & Inspection

    ft_split: Splits a string using a specified character delimiter c into a newly allocated array of strings.

    ft_strchr: Locates the first occurrence of a character in a string.

    ft_strdup: Creates a duplicate of a given string by allocating new memory and copying its contents.

    ft_striteri: Applies a function f to each character of a string, passing its index as the first argument.

    ft_strjoin: Allocates and returns a new string formed by concatenating two strings (s1 and s2).

    ft_strlcat: Appends a string to a destination buffer with a specified total size, ensuring null-termination and returning the total length attempted to create.

    ft_strlcpy: Copies up to size - 1 characters from a source string to a destination buffer, guaranteeing null-termination.

    ft_strlen: Calculates the length of a string.

    ft_strmapi: Creates a new string by applying a function f to each character of a string along with its index.

    ft_strncmp: Compares up to n characters of two strings (s1 and s2).

    ft_strnstr: Locates the first occurrence of a substring (little) within a string (big) within a maximum length limit (len).

    ft_strrchr: Locates the last occurrence of a character in a string.

    ft_strtrim: Removes all characters specified in a set from the beginning and end of a string, returning a newly allocated trimmed string.

    ft_substr: Extracts a substring starting from a given index with a maximum length from a source string.

File Descriptor Output

    ft_putchar_fd: Writes a single character to a given file descriptor.

    ft_putendl_fd: Writes a string followed by a newline to a given file descriptor.

    ft_putnbr_fd: Writes an integer to a given file descriptor.

    ft_putstr_fd: Writes a string to a given file descriptor.

Linked List Utilities

    ft_lstadd_back: Adds a new list node to the end of a linked list.

    ft_lstadd_front: Adds a new list node to the beginning of a linked list.

    ft_lstclear: Deletes and frees a list and all of its consecutive nodes using a provided deletion function and free.

    ft_lstdelone: Frees a single list node's content using a provided function and then frees the node itself.

    ft_lstiter: Iterates through a linked list and applies a function f to the content of each node.

    ft_lstlast: Returns the last node of a linked list.

    ft_lstmap: Iterates through a linked list, applies a function f to each node's content to create a new list, and utilizes a del function if allocation fails.

    ft_lstnew: Allocates and returns a new linked list node with initialized content and a NULL next pointer.

    ft_lstsize: Counts the number of nodes in a linked list.