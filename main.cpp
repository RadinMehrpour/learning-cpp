#include <iostream>

int main()
{
    int score;

    std::cout << "Enter your score : ";
    std::cin >> score;

    if (score >= 90 && score <= 100)
    {
        std::cout << "Excellent";
    }
    else if (score >= 70 && score <= 89)
    {
        std::cout << "Good";
    }
    else if (score >= 50 && score <= 69)
    {
        std::cout << "Pass";
    }
    else if (score >= 0 && score <= 49)
    {
        std::cout << "Fail";
    }
    else
    {
        std::cout << "Invalid";
    }
}