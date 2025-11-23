#include "factorial.h"


FactorialType calculateFactorial(int n) {
    if (n < 0) {
        
        return 0; 
    }

     
    FactorialType result = 1;

    
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}