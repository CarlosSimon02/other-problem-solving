#include <iostream>

int main() 
{
    int prev1Term = 0;
    int prev2Term = 1;
    int currentTerm = prev1Term + prev2Term;
    int sum = 0;

    while(currentTerm <= 4'000'000)
    {
        if(currentTerm % 2 == 0)
        {
            sum += currentTerm;
        }

        prev1Term = prev2Term;
        prev2Term = currentTerm;
        currentTerm = prev1Term + prev2Term;
    }

    std::cout << sum << std::endl;
}