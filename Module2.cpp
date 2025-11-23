#include <iostream>

//Вычисление с использованием int 

#include "factorial.h"

void demo_int() {
    std::cout << " Calculation using int " << std::endl;
    int number = 5;
    FactorialType result_int = calculateFactorial(number);
    std::cout << number << "! (int) = " << result_int << std::endl;
}

//Вычисление с использованием float 
#define FACTORIAL_FLOAT 
#include "factorial.h" 

void demo_float() {
    std::cout << "\n Calculation using float " << std::endl;
    int number = 5;

    
    FactorialType result_float = calculateFactorial(number);
    std::cout << number << "! (float) = " << result_float << std::endl;
}


int main() {
   
    demo_int();

   
    demo_float();

    return 0;
}