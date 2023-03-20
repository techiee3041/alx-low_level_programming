# 0x0D. C - Preprocessor

## General

* What are macros and how to use them

> An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

* What are the most common predefined macros

> __DATE__: current date in MMM DD YYY

> __TIME__: current time in HH:MM:SS

> __FILE__: current file

> __LINE__: current line number

> __STDC__ defined as 1 when the compiler compiles with the ANSI standard

* How to include guard your header files

> Include guards, also known as header guards, are used in header files to prevent multiple inclusions of the same header file in a single translation unit.

> When a header file is included multiple times in a single translation unit, it can lead to multiple definitions of the same symbols, such as functions, variables, or types. This can cause compilation errors, linker errors, or undefined behavior.

> #ifndef MY_HEADER_H

> #define MY_HEADER_H

> // Declarations of functions and types go here

> #endif

