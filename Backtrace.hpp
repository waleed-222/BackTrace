#ifndef DC156D61_7A96_452F_9BFB_29A387BFF6AA
#define DC156D61_7A96_452F_9BFB_29A387BFF6AA
#include<iostream>
#include<vector>

static std::vector<std::string> functionStack;

// Enter function log using lambda, adds to function stack
#define EnterFn { \
    functionStack.push_back(__FUNCTION__); \
    std::cout << "Enter to [" << __FUNCTION__ << "]" << std::endl; \
}

// Exit function log using lambda, removes from function stack
#define ExitFn { \
    std::cout << "Exit from [" << __FUNCTION__ << "]" << std::endl; \
    functionStack.pop_back(); \
}

// Print function stack
#define PRINTBT { \
    std::cout << "Functions entered:" << std::endl; \
    int i = 0; \
    for (const auto& func : functionStack) { \
        std::cout << i << " - " << func << std::endl; \
        i++; \
    } \
}
#endif /* DC156D61_7A96_452F_9BFB_29A387BFF6AA */
