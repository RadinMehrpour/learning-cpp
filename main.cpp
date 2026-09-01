#include <iostream>

int main()
{
    double firstNum;
    double secondNum;
    char op;

    std::cout << "Enter a number:";
    std::cin >> firstNum;
    std::cout << "Enter an operator:";
    std::cin >> op;
    std::cout << "Enter a number:";
    std::cin >> secondNum;

    if (op == '*')
    {
        std::cout << "Result : " << (firstNum * secondNum);
    }
    else if (op == '+')
    {
        std::cout << "Result : " << (firstNum + secondNum);
    }
    else if (op == '-')
    {
        std::cout << "Result : " << (firstNum - secondNum);
    }
    else if (op == '/')
    {
        if (secondNum == 0)
        {
            std::cout << "Invalid";
        }
        else
        {
            std::cout << "Result : " << (firstNum / secondNum);
        }
    }
    else
    {
        std::cout << "Invalid Operator";
    }
}