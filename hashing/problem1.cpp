// Find a pair with the given sum in an array
// Given an unsorted integer array, find a pair with the given sum in it.

// For example,

// Input:
 
// nums = [8, 7, 2, 5, 3, 1]
// target = 10
 
// Output:
 
// Pair found (8, 2)
// or
// Pair found (7, 3)

#include <iostream>
#include <unordered_set>
#include <vector>

using VectorPairs = std::vector<std::pair<int,int>>; 

VectorPairs pairsWithTheSumOfTarget(const std::vector<int>& nums, int target) 
{
    VectorPairs pairs;
    std::unordered_set<int> set;

    for (auto &&num : nums)
    {
        int compliment = target - num;
        if(set.count(compliment))
        {
            pairs.emplace_back(num, compliment);
            set.erase(compliment);
        }
        else 
            set.insert(num);
    }

    return pairs;
}

int main()
{
    std::vector<int> nums{6, 6, 6, 8, 1, 9};
    int target = 12;

    VectorPairs pairs = pairsWithTheSumOfTarget(nums, target);

    for (auto &&pair : pairs)
    {
        std::cout << "Pair found (" << pair.first << ", " << pair.second << ")"<< "\n";
    }

    if(pairs.size() == 0)
        std::cout << "Pairs not found" << "\n";
    
}