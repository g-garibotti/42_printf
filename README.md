# ft_printf

![C](https://img.shields.io/badge/language-C-blue.svg)

A custom implementation of the C standard library's `printf` function.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Implementation Details](#implementation-details)
- [Challenges and Solutions](#challenges-and-solutions)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project is a recreation of the standard C library's `printf` function. The goal was to understand and implement the complex formatting and output mechanisms of `printf` from scratch, demonstrating proficiency in C programming and low-level string manipulation.

## Features

- Supports the following format specifiers:
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer address
  - `%d` and `%i`: Signed decimal integer
  - `%u`: Unsigned decimal integer
  - `%x` and `%X`: Hexadecimal integer (lowercase and uppercase)
  - `%%`: Percent sign
- Handles various edge cases and error conditions
- Minimal use of external libraries for core functionality

## Getting Started

### Prerequisites

- GCC compiler
- Make (optional, for building with Makefile)

### Installation

1. Clone the repository:
   ```
   git clone https://github.com/g-garibotti/ft_printf.git
   ```
2. Navigate to the project directory:
   ```
   cd ft_printf
   ```
3. Compile the project:
   ```
   make
   ```

## Usage

Include the `ft_printf.h` header in your C file and link with the compiled library:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
```

## Implementation Details

The project is structured into several key components:

- `ft_printf.c`: Main function and format parsing logic
- `classic.c`: Implementations for basic format specifiers (c, s, d, i, u)
- `base16.c`: Hexadecimal conversion functions
- `ft_ptr.c`: Pointer address formatting

Key algorithms and data structures used:

- Variadic functions to handle variable number of arguments
- Custom number-to-string conversion for various bases
- Efficient string manipulation techniques

## Challenges and Solutions

1. **Challenge**: Handling variadic arguments safely and efficiently.
   **Solution**: Implemented a robust va_list management system with proper initialization and cleanup.

2. **Challenge**: Efficient conversion of integers to different bases.
   **Solution**: Developed optimized algorithms for base conversion, particularly for hexadecimal output.

3. **Challenge**: Ensuring consistent behavior with edge cases (NULL pointers, integer limits, etc.).
   **Solution**: Implemented comprehensive error checking and edge case handling throughout the codebase.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.
