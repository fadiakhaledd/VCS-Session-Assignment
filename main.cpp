#include <iostream>
#include <vector>

int getSum(std::vector<int> &numbers)
{
    int sum = 0;
    for (int number : numbers)
    {
        sum += number;
    }
    return sum;
}

int main()
{
    std::vector<int> inputNumbers = {1, 2, 3, 4, 5, 8, 7, 8, 9, 10};
    int numbersSum = getSum(inputNumbers);
    std::cout << numbersSum << std::endl;
    return 0;
}