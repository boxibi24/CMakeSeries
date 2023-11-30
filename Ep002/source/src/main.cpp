#include <iostream>
#include <concepts>
#include "dog.h"

template <typename T>
requires std::integral<T>
T add (T a, T b)
{
    return a + b;
}

int main()
{ 
    std::cout << "Hello C++" << std::endl;
    std::cout << "The sum is : " << add(7, 3) << std::endl;
    dog Dog = dog();
    return 0;  
}
