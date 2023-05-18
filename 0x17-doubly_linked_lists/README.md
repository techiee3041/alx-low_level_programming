# C - Doubly linked lists :page_with_curl: 0x17-doubly_linked_lists
## Project:-
What I learnt on this project:
- What a doubly linked list is
- How to use a doubly linked list
### Tasks
* [lists.h](./lists.h) - header file containing function prototypes

* [4-free_dlistint.c](./4-free_dlistint.c): C function that frees a doubly-linked `dlistint_t` list.

* [0-print_dlistint.c](./0-print_dlistint.c): A function that prints all the elements of a list.

* [1-dlistint_len.c](./1-dlistint_len.c): A function that returns the number of elements in a linked list.

* [2-add_dnodeint.c](./2-add_dnodeint.c): A a function that adds a new node at the beginning of a list.

* [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): A function that adds a new node at the end of a list.

* [5-get_dnodeint.c](./5-get_dnodeint.c): A unction that returns the nth node of a linked list.

* [6-sum_dlistint.c](./6-sum_dlistint.c): A function that returns the sum of all the data (n) of a linked list.

* [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function that inserts a new node at a
  given position.
  * The parameter `idx` is the index of the list where the new node should
  be added - indices start at `0`.
  * If the function fails - returns `NULL`.
  * Otherwise - returns the address of the new element.
  * Requires compilation with functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c)
  and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

  * [8-delete_dnodeint.c](./8-delete_dnodeint.c): A function that deletes the node at index index of a linked list.
