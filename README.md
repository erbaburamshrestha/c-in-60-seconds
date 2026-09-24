# C in 60 Seconds

Learn the C programming language one 60-second lesson a day.

Every short video on my channels has its complete, tested source code here.
The topics follow *The C Programming Language* (2nd Edition) by Kernighan & Ritchie, from Hello World to building your own `malloc`.

**Follow @erbaburamshrestha:** [YouTube](https://www.youtube.com/@erbaburamshrestha) · [TikTok](https://www.tiktok.com/@erbaburamshrestha) · [Instagram](https://www.instagram.com/erbaburamshrestha) · [Facebook](https://www.facebook.com/erbaburamshrestha) · [Threads](https://www.threads.com/@erbaburamshrestha)

## 🚀 How to use this repo

1. Find the episode you watched in the list below and open its folder.
2. Compile and run the code:

   ```bash
   gcc -Wall -Wextra -std=c99 main.c -o main
   ./main
   ```

   Episodes that use `math.h` need `-lm` at the end. Chapter 8 episodes use UNIX system calls (Linux, macOS, or WSL on Windows).
3. Change the code, break it, and fix it again. That's how you learn C.

Don't have a compiler yet? Watch **Day 2** for setup, or paste the code into an online compiler such as [OnlineGDB](https://www.onlinegdb.com/online_c_compiler).

## 📚 Episodes

✅ = code ready · 🔜 = coming soon

### Getting Started

| Day | Topic | K&R | Code |
|---|---|---|---|
| 0 | [Series trailer](ep000-series-trailer/) | – | 🔜 |
| 1 | [Why learn C today?](ep001-why-learn-c-today/) | Intro | 🔜 |
| 2 | [Setting up a C compiler (gcc + VS Code)](ep002-setting-up-a-c-compiler-gcc-vs-code/) | – | 🔜 |

### Chapter 1: A Tutorial Introduction

| Day | Topic | K&R | Code |
|---|---|---|---|
| 3 | [Hello, World! explained line by line](ep003-hello-world-explained-line-by-line/) | 1.1 | 🔜 |
| 4 | [Variables and arithmetic](ep004-variables-and-arithmetic/) | 1.2 | 🔜 |
| 5 | [The `for` loop](ep005-the-for-loop/) | 1.3 | 🔜 |
| 6 | [Symbolic constants (`#define`)](ep006-symbolic-constants-define/) | 1.4 | 🔜 |
| 7 | [`getchar` / `putchar`: copying input](ep007-getchar-putchar-copying-input/) | 1.5.1 | 🔜 |
| 8 | [Counting characters and lines](ep008-counting-characters-and-lines/) | 1.5.2–1.5.3 | 🔜 |
| 9 | [Counting words](ep009-counting-words/) | 1.5.4 | 🔜 |
| 10 | [Arrays](ep010-arrays/) | 1.6 | 🔜 |
| 11 | [Functions](ep011-functions/) | 1.7 | 🔜 |
| 12 | [Call by value](ep012-call-by-value/) | 1.8 | 🔜 |
| 13 | [Character arrays (strings)](ep013-character-arrays-strings/) | 1.9 | 🔜 |
| 14 | [External variables and scope](ep014-external-variables-and-scope/) | 1.10 | 🔜 |

### Chapter 2: Types, Operators and Expressions

| Day | Topic | K&R | Code |
|---|---|---|---|
| 15 | [Naming rules](ep015-naming-rules/) | 2.1 | 🔜 |
| 16 | [Data types and `sizeof`](ep016-data-types-and-sizeof/) | 2.2 | 🔜 |
| 17 | [Constants, escape sequences, `enum`](ep017-constants-escape-sequences-enum/) | 2.3 | 🔜 |
| 18 | [Declarations and `const`](ep018-declarations-and-const/) | 2.4 | 🔜 |
| 19 | [Arithmetic operators and `%`](ep019-arithmetic-operators-and-modulo/) | 2.5 | 🔜 |
| 20 | [Relational and logical operators](ep020-relational-and-logical-operators/) | 2.6 | 🔜 |
| 21 | [Type conversions and casting](ep021-type-conversions-and-casting/) | 2.7 | 🔜 |
| 22 | [`++` and `--`](ep022-increment-and-decrement/) | 2.8 | 🔜 |
| 23 | [Bitwise operators](ep023-bitwise-operators/) | 2.9 | 🔜 |
| 24 | [Assignment operators](ep024-assignment-operators/) | 2.10 | 🔜 |
| 25 | [Ternary operator `?:`](ep025-ternary-operator/) | 2.11 | 🔜 |
| 26 | [Precedence and order of evaluation](ep026-precedence-and-order-of-evaluation/) | 2.12 | 🔜 |

### Chapter 3: Control Flow

| Day | Topic | K&R | Code |
|---|---|---|---|
| 27 | [Statements and blocks](ep027-statements-and-blocks/) | 3.1 | 🔜 |
| 28 | [`if-else` and the dangling else](ep028-if-else-and-the-dangling-else/) | 3.2 | 🔜 |
| 29 | [`else-if` chains + binary search](ep029-else-if-chains-binary-search/) | 3.3 | 🔜 |
| 30 | [`switch`](ep030-switch/) | 3.4 | 🔜 |
| 31 | [`while` vs `for`](ep031-while-vs-for/) | 3.5 | 🔜 |
| 32 | [`do-while`](ep032-do-while/) | 3.6 | 🔜 |
| 33 | [`break` and `continue`](ep033-break-and-continue/) | 3.7 | 🔜 |
| 34 | [`goto`: should you ever?](ep034-goto-should-you-ever/) | 3.8 | 🔜 |

### Chapter 4: Functions and Program Structure

| Day | Topic | K&R | Code |
|---|---|---|---|
| 35 | [Function basics: prototypes](ep035-function-basics-prototypes/) | 4.1 | 🔜 |
| 36 | [Functions returning non-integers](ep036-functions-returning-non-integers/) | 4.2 | 🔜 |
| 37 | [External variables in real programs](ep037-external-variables-in-real-programs/) | 4.3 | 🔜 |
| 38 | [Scope rules and `extern`](ep038-scope-rules-and-extern/) | 4.4 | 🔜 |
| 39 | [Header files](ep039-header-files/) | 4.5 | 🔜 |
| 40 | [`static` variables](ep040-static-variables/) | 4.6 | 🔜 |
| 41 | [`register` variables](ep041-register-variables/) | 4.7 | 🔜 |
| 42 | [Block structure](ep042-block-structure/) | 4.8 | 🔜 |
| 43 | [Initialization rules](ep043-initialization-rules/) | 4.9 | 🔜 |
| 44 | [Recursion](ep044-recursion/) | 4.10 | 🔜 |
| 45 | [`#include`](ep045-include/) | 4.11.1 | 🔜 |
| 46 | [Macros and their traps](ep046-macros-and-their-traps/) | 4.11.2 | 🔜 |
| 47 | [Conditional compilation + include guards](ep047-conditional-compilation-include-guards/) | 4.11.3 | 🔜 |

### Chapter 5: Pointers and Arrays

| Day | Topic | K&R | Code |
|---|---|---|---|
| 48 | [Pointers and addresses](ep048-pointers-and-addresses/) | 5.1 | ✅ |
| 49 | [Pointers as function arguments (`swap`)](ep049-pointers-as-function-arguments-swap/) | 5.2 | 🔜 |
| 50 | [Pointers and arrays](ep050-pointers-and-arrays/) | 5.3 | 🔜 |
| 51 | [Pointer arithmetic](ep051-pointer-arithmetic/) | 5.4 | 🔜 |
| 52 | [Character pointers and string functions](ep052-character-pointers-and-string-functions/) | 5.5 | 🔜 |
| 53 | [Arrays of pointers, pointer to pointer](ep053-arrays-of-pointers-pointer-to-pointer/) | 5.6 | 🔜 |
| 54 | [Multi-dimensional arrays](ep054-multi-dimensional-arrays/) | 5.7 | 🔜 |
| 55 | [Initializing pointer arrays](ep055-initializing-pointer-arrays/) | 5.8 | 🔜 |
| 56 | [Pointers vs 2D arrays](ep056-pointers-vs-2d-arrays/) | 5.9 | 🔜 |
| 57 | [Command-line arguments](ep057-command-line-arguments/) | 5.10 | 🔜 |
| 58 | [Function pointers](ep058-function-pointers/) | 5.11 | 🔜 |
| 59 | [Reading complicated declarations](ep059-reading-complicated-declarations/) | 5.12 | 🔜 |

### Chapter 6: Structures

| Day | Topic | K&R | Code |
|---|---|---|---|
| 60 | [Structures](ep060-structures/) | 6.1 | 🔜 |
| 61 | [Structs and functions](ep061-structs-and-functions/) | 6.2 | 🔜 |
| 62 | [Arrays of structs](ep062-arrays-of-structs/) | 6.3 | 🔜 |
| 63 | [Pointers to structs (`->`)](ep063-pointers-to-structs/) | 6.4 | 🔜 |
| 64 | [Self-referential structs: linked list](ep064-self-referential-structs-linked-list/) | 6.5 | 🔜 |
| 65 | [Table lookup: a hash table](ep065-table-lookup-a-hash-table/) | 6.6 | 🔜 |
| 66 | [`typedef`](ep066-typedef/) | 6.7 | 🔜 |
| 67 | [Unions](ep067-unions/) | 6.8 | 🔜 |
| 68 | [Bit-fields](ep068-bit-fields/) | 6.9 | 🔜 |

### Chapter 7: Input and Output

| Day | Topic | K&R | Code |
|---|---|---|---|
| 69 | [Standard I/O and redirection](ep069-standard-i-o-and-redirection/) | 7.1 | 🔜 |
| 70 | [`printf` format specifiers](ep070-printf-format-specifiers/) | 7.2 | 🔜 |
| 71 | [Variable-length argument lists](ep071-variable-length-argument-lists/) | 7.3 | 🔜 |
| 72 | [`scanf` and its traps](ep072-scanf-and-its-traps/) | 7.4 | 🔜 |
| 73 | [File access: `fopen`, `fclose`](ep073-file-access-fopen-fclose/) | 7.5 | 🔜 |
| 74 | [`stderr` and `exit`](ep074-stderr-and-exit/) | 7.6 | 🔜 |
| 75 | [Line I/O: `fgets` / `fputs`](ep075-line-i-o-fgets-fputs/) | 7.7 | 🔜 |
| 76 | [`string.h` essentials](ep076-string-h-essentials/) | 7.8.1 | 🔜 |
| 77 | [`ctype.h`: character tests](ep077-ctype-h-character-tests/) | 7.8.2 | 🔜 |
| 78 | [`ungetc` and `system()`](ep078-ungetc-and-system/) | 7.8.3–7.8.4 | 🔜 |
| 79 | [`malloc`, `calloc`, `free`](ep079-malloc-calloc-free/) | 7.8.5 | 🔜 |
| 80 | [`math.h`](ep080-math-h/) | 7.8.6 | 🔜 |
| 81 | [Random numbers: `rand` / `srand`](ep081-random-numbers-rand-srand/) | 7.8.7 | 🔜 |

### Chapter 8: The UNIX System Interface

| Day | Topic | K&R | Code |
|---|---|---|---|
| 82 | [File descriptors](ep082-file-descriptors/) | 8.1 | 🔜 |
| 83 | [Low-level `read` and `write`](ep083-low-level-read-and-write/) | 8.2 | 🔜 |
| 84 | [`open`, `creat`, `close`, `unlink`](ep084-open-creat-close-unlink/) | 8.3 | 🔜 |
| 85 | [Random access: `lseek`](ep085-random-access-lseek/) | 8.4 | 🔜 |
| 86 | [How `fopen` and `getc` work inside](ep086-how-fopen-and-getc-work-inside/) | 8.5 | 🔜 |
| 87 | [Listing directories](ep087-listing-directories/) | 8.6 | 🔜 |
| 88 | [Build your own `malloc`](ep088-build-your-own-malloc/) | 8.7 | 🔜 |

### Appendix A: Reference Manual

| Day | Topic | K&R | Code |
|---|---|---|---|
| 89 | [Objects and lvalues](ep089-objects-and-lvalues/) | A.5 | 🔜 |
| 90 | [Scope and linkage (`static` vs `extern`)](ep090-scope-and-linkage-static-vs-extern/) | A.11 | 🔜 |

### Appendix B: Standard Library

| Day | Topic | K&R | Code |
|---|---|---|---|
| 91 | [`assert.h`](ep091-assert-h/) | B.6 | 🔜 |
| 92 | [`setjmp` / `longjmp`](ep092-setjmp-longjmp/) | B.8 | 🔜 |
| 93 | [Signals (`signal.h`)](ep093-signals-signal-h/) | B.9 | 🔜 |
| 94 | [Date and time (`time.h`)](ep094-date-and-time-time-h/) | B.10 | 🔜 |
| 95 | [`limits.h` and `float.h`](ep095-limits-h-and-float-h/) | B.11 | 🔜 |

### Finale

| Day | Topic | K&R | Code |
|---|---|---|---|
| 96 | [Series finale: roadmap + C++ teaser](ep096-series-finale-roadmap-cpp-teaser/) | – | 🔜 |

## 🤝 Contributing

Found a bug, or have a clearer example? Open an issue or a pull request.
Every `main.c` must compile with `gcc -Wall -Wextra -Werror -std=c99`. The GitHub Actions check runs this automatically.

## 📄 License

[MIT](LICENSE) © 2026 Baburam Shrestha
