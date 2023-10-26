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

int getMin(std::vector<int> &numbers)
{
    if (numbers.empty())
    {
        throw std::runtime_error("Vector is empty");
    }

    int minimum = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        minimum = std::min(minimum, numbers[i]);
    }
    return minimum;
}

int main()
{
    std::vector<int> inputNumbers = {1, 2, 3, 4, 5, 8, 7, 8, 9, 10};

    int numbersSum = getSum(inputNumbers);
    int minimumNumber = getMin(inputNumbers);

    std::cout << numbersSum << std::endl;
    std::cout << "Minimum number: " << minimumNumber << std::endl;
    return 0;
}