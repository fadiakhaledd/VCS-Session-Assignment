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


double getAverage(std::vector<int> &numbers){
 if (numbers.empty())
    {
        throw std::runtime_error("Vector is empty");
    }
    int sum = getSum(numbers);
    int vectorSize = numbers.size();
    return static_cast<double>(sum) / vectorSize;

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
    std::vector<int> inputNumbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int numbersSum = getSum(inputNumbers);
    std::cout << "Sum of numbers: " << numbersSum << std::endl;
    
    double numbersAverage = getAverage(inputNumbers);
    std::cout << "Average of numbers: " << numbersAverage << std::endl;

    int minimumNumber = getMin(inputNumbers);
    std::cout << "Minimum number: " << minimumNumber << std::endl;
    return 0;
}
