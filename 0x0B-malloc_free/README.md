# 0x0B. C - malloc, free

## C Memory allocation

### General
* What is the difference between automatic and dynamic allocation

> In dynamic allocation, we need to reserve some space because we are not aware of the amount of space that is needed while in automatic allocation, the program reserves the space without having to think about it.
>
* What is malloc and free and how to use them

> malloc is used to allocate a certain amount of memory during excecution of a program.

> free is used to deallocate the memory allocated by malloc


* Why and when use malloc

> we use malloc when we do not know in advance how much amount of memory you need and will only need it when running the program during compilation


* How to use valgrind to check for memory leak

> When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.
