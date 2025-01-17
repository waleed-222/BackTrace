#include<iostream>
#include"Backtrace.hpp"

void fun2();
void fun3();

void fun1() {
    EnterFn;
    fun2();
    ExitFn;
}

void fun2() {
    EnterFn;
    fun3();
    ExitFn;
}

void fun3() {
    EnterFn;
    PRINTBT;  // This prints the backtrace
    ExitFn;
}

int main() {
    EnterFn;
    fun1();
    ExitFn;

    return 0;
}
