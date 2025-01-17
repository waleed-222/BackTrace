# Function Backtrace in C++

This project provides a simple way to track function calls and print the call stack (backtrace) for a C++ program using macros.

## Overview

This project defines macros for logging function entries, exits, and backtraces, allowing developers to easily trace the flow of function calls in their programs. It is useful for debugging and understanding the order in which functions are called in complex code.

## Features

- **Function Entry Logging**: Logs the function name when entering a function.
- **Function Exit Logging**: Logs the function name when exiting a function.
- **Backtrace Printing**: Prints the current call stack with the functions that have been entered.

## How It Works

The main functionality is provided by macros in `Backtrace.hpp`. When included in your project, these macros will automatically log the entry and exit of functions, as well as allow you to print the current backtrace.

### Macros Used:

- **`EnterFn`**: Logs when a function is entered and adds the function name to a stack.
- **`ExitFn`**: Logs when a function is exited and removes the function name from the stack.
- **`PRINTBT`**: Prints the current call stack (i.e., the sequence of functions that have been entered).

## Example Usage

### `Backtrace.hpp`

```cpp
#ifndef DC156D61_7A96_452F_9BFB_29A387BFF6AA
#define DC156D61_7A96_452F_9BFB_29A387BFF6AA
#include <iostream>
#include <vector>
#include <string>

static std::vector<std::string> functionStack;

#define EnterFn { \
    functionStack.push_back(__FUNCTION__); \
    std::cout << "Enter to [" << __FUNCTION__ << "]" << std::endl; \
}

#define ExitFn { \
    std::cout << "Exit from [" << __FUNCTION__ << "]" << std::endl; \
    functionStack.pop_back(); \
}

#define PRINTBT { \
    std::cout << "Functions entered:" << std::endl; \
    int i = 0; \
    for (const auto& func : functionStack) { \
        std::cout << i << " - " << func << std::endl; \
        i++; \
    } \
}

#endif /* DC156D61_7A96_452F_9BFB_29A387BFF6AA */
