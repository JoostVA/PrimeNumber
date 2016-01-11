#include <iostream>
#include <cmath>

bool IsPrime(double);

int main()
{
    std::cout << "Welcome to PRIME.\n" << "Enter an integer: ";
    double number = 0;
    std::cin >> number;
    
    if (IsPrime(number))
    {
        std::cout << number << " is a prime number.\n";
    }
    else
    {
        std::cout << number << " is a composite number.\n";
    }
    
}

bool IsPrime(double number)
{
    bool prime = true;
    return prime;
}
