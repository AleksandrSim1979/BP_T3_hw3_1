// HW_BP_3_1.cpp : Задача 1. Калькулятор двух чисел

#include <iostream>

class Calculator
{
    double num1 = 1;

    double num2 = 1;

public:

    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1);

    bool set_num2(double num2);

};


bool Calculator::set_num1(double num1)
{

    if (num1 != 0)
    {
        this->num1 = num1;

        return true;
    }
    else
    {
        return false;
    };
}

bool Calculator::set_num2(double num2)
{

    if (num2 != 0)
    {
        this->num2 = num2;

        return true;
    }
    else
    {
        return false;
    };

}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Calculator calc;

    double n = 1;

    while (true)
    {
        std::cout << "Введите num1: ";

        std::cin >> n;

        if (calc.set_num1(n) == 0)
        {
            for (; calc.set_num1(n) == 0;) 
            {
                std::cout << "Неверный ввод! " << std::endl;
                std::cout << "Введите num1: ";
                std::cin >> n;
            }
        }

        std::cout << "Введите num2: ";

        std::cin >> n;

        if (calc.set_num2(n) == 0)
        {
            for (; calc.set_num2(n) == 0;) 
            {
                std::cout << "Неверный ввод! " << std::endl;
                std::cout << "Введите num2: ";
                std::cin >> n;
            }
        }



        std::cout << "num1 + num2 = " << calc.add() << std::endl;

        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;

        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;

        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;

        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;

        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

    }
    return 0;
}
