//
//  main.cpp

//  Created by Eiji Adachi Medeiros Barbosa and Vitória Maria Lúcio Deon
//

#include <iostream>
#include <cassert>
#include "Math.hpp"

void testAdd();
void testAddRecursivo();
void testSubtract();
void testMultiply();
void testMultiplyRecursivo();
void testDivide();
void testFactorial();
void testFactorialRecursivo();
void testFactorialRecursivoEmCauda();

int main(int argc, const char * argv[]) {
    
    testAdd();
    testAddRecursivo();
    testSubtract();
    testMultiply();
    testMultiplyRecursivo();
    testDivide();
    testFactorial();
    testFactorialRecursivo();
    testFactorialRecursivoEmCauda();

    
    std::cout << "All tests passed!\n";
    return 0;
}

void testAdd()
{
	
	assert(add(1, 1) == 2);
	assert(add(-1, 1) == 0);
	assert(add(-1, -1) == -2);
	assert(add(0, 0) == 0);
	assert(add(1, -1) == 0);
	
    /*float result = add(1, 1);
    
    if(result != 2)
    {
        std::cout << "1st test failed" << std::endl;
    }
    
    result = add(-1, 1);
    
    if(result != 0)
    {
        std::cout << "2nd test failed" << std::endl;
    }
    
    result = add(-1, -1);
    
    if(result != -2.0)
    {
        std::cout << "3rd test failed" << std::endl;
    }
    
    result = add(0, 0);
    
    if(result != 0)
    {
        std::cout << "4th test failed" << std::endl;
    }
    
    result = add(1, -1);
    
    if(result != 0)
    {
        std::cout << "5th test failed" << std::endl;
    }*/
    
    std::cout << "All add-tests passed!\n";
}

void testAddRecursivo() 
{
    assert(add(1, 1) == 2);
    assert(add(2, 1) == 3);
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    assert(add(1, 0) == 1);

    std::cout << "All addRecursivo-tests passed!\n";
}

void testSubtract()
{
    assert(subtract(1, 1) == 0 );
    assert(subtract(-1, 1) == -2 );
    assert(subtract(-1, -1) == 0 );
    assert(subtract(0, 0) == 0 );
    assert(subtract(1, -1) == 2 );
    
    std::cout << "All subtract-tests passed!\n";
}

void testMultiply()
{
	assert(multiply(1, 1) == 1);
	assert(multiply(-1, 1) == -1);
	assert(multiply(-1, -1) == 1);
	assert(multiply(0, 0) == 0);
	assert(multiply(1, -1) == -1);
	
	std::cout << "All multipĺy-tests passed!\n";
}

void testMultiplyRecursivo()
{
    assert(multiply(1, 1) == 1);
    assert(multiply(3, 1) == 3);
    assert(multiply(2, 3) == 6);
    assert(multiply(0, 0) == 0);
    assert(multiply(2, 2) == 4);
    
    std::cout << "All multipĺyRecursivo-tests passed!\n";
}

void testDivide()
{
	assert(divide(1, 1) == 1);
	assert(divide(-1, 1) == -1);
	assert(divide(-1, -1) == 1);
	assert(divide(4, 2) == 2);
	assert(divide(1, -1) == -1);
	
	std::cout << "All divide-tests passed!\n";
}

void testFactorial()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);

    std::cout << "All factorial-tests passed!\n";
}

void testFactorialRecursivo()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);

    std::cout << "All factorialRecursivo-tests passed!\n";
}

void testFactorialRecursivoEmCauda()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);

    std::cout << "All factorialRecursivoEmCauda-tests passed!\n";
}