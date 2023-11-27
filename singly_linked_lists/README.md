# SINGLY LINKED LISTS

This project is about learning:

* When and why using `linked lists vs arrays`

* How to build and use `linked lists`

# TASKS

The mandatory tasks are the following:

* 0 - Print list : 0-print_list.c
C function that prints all the elements of a `list_t` list.
    * If `str` is `NULL`, the function prints `[0] (nil)`.
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a`

* 1 - list length : 1-list_len.c
C function that returns the number of elements in a linked `list_t` list.
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b`

* 2 - Add node : 2-add_node.c
C function that adds a new node at the beginning a of a `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c`

* 3 - Add node at the end : 3-add_node_end.c
C function that adds a new node at the end of a linked `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d`

* 4 - Free list : 4-free_list.c
C function that frees a `list_t` list.
`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e`
