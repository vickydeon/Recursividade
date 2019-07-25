//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa and Vitória Maria Lúcio Deon
//

#include "Math.hpp"

int add(int a, int b)
{
    return a + b;
}

int addRecursivo(int a, int b) {
  
  if (b == 0) {
    return a;
  }
  else { 
    return 1 + addRecursivo(a, b - 1);
  }
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int multiplyRecursivo(int a, int b) {

  if (b == 0) {
    return 0;
  }
  else if (b == 1) {
    return a;
  }
  else {
    return a + multiplyRecursivo(a, b - 1);
  }
}

int divide(int a, int b)
{
	return a / b;
}

int factorial(int a)
{
	int fatorial = 0;

	for (fatorial = 1; a > 1; a--) {
		fatorial *= a;
	}

	return fatorial;
}

int factorialRecursivo(int a)
{
	if (a == 0) {
		return 1;
	}
	else {
		return a * factorialRecursivo(a - 1);
	}
}

int factorialRecursivoEmCauda(int a)
{
	return tail_caudaFatorial(a, 1);
}

int tail_caudaFatorial(int a, int aux)
{
	if (a == 0) {
		return aux;
	}
	else {
		return tail_caudaFatorial(a - 1, aux * a);
	}
}