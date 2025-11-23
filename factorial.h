#pragma once

#ifdef FACTORIAL_FLOAT
using FactorialType = float;
#else
using FactorialType = int;
#endif


FactorialType calculateFactorial(int n); 
