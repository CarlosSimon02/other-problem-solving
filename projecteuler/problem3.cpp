#include <iostream>
#include <cmath>

bool isPrime(int num)
{
    if(num <= 1) return false;

    for(int i = 2; i <= round(sqrt(num)); i++)
        if(num % i == 0) return false;

    return true;
}

int main() 
{
    int largestPrime = 0;
    for(int i = round(sqrt(600851475143)); i > 2; i--)
    {
        if(600851475143 % i == 0 && isPrime(i))
        {
            largestPrime = i;
            break;
        }
    }

    std::cout << largestPrime << std::endl;
}