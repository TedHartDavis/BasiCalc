#include <iostream>
#include <cstdlib> /* strtod */

float getnumber ()
{
    //std::getline(std::cin, number);
    std::string placeholder;
    getline(std::cin, placeholder);
    //number << std::atof << placeholder << std::endl;
    float number = atof(placeholder.c_str());
    return number;
}


float add (float num1, float num2)
{
    float result;
    result = (num1 + num2);
    return result;
}

float subtract (float num1, float num2)
{
    float result;
    result = (num1 - num2);
    return result;
}

float multiply (float num1, float num2)
{
    float result;
    result = (num1 * num2);
    return result;
}

float divide (float num1, float num2)
{
    float result;
    result = (num1 / num2);
    return result;
}

float circlearea (float radius)
{
    float result = 0;
    constexpr float pi = 3.14159;
    result = pi * radius * radius;
    return result;
}

float circlediameter (float radius)
{
    float result = 0;
    constexpr float pi = 3.14159;
    result = pi * radius * 2;
    return result;
}

void drawmenu()
{
    std::cout << "add - add two numbers" << std::endl;
    std::cout << "subtract - subtract the second number from the first number" << std::endl;
    std::cout << "multiply - multiply two numbers" << std::endl;
    std::cout << "divide - divide the first number by the second number" << std::endl;
    std::cout << "circlearea - calculate area of a circle" << std::endl;
    std::cout << "circlediameter - calculate diameter of a circle" << std::endl;
    std::cout << "exit - exit" << std::endl << std::endl;
}

int main()
{
    float num1;
    float num2;
    float result;
    drawmenu();

    for(;;)
        {
            std::string menuchoice = "";
            std::cout << "Enter menu choice" << std::endl;
            getline (std::cin, menuchoice);
            std::cout << "You have chosen " << menuchoice << std::endl;

            if (menuchoice == "exit")
            {
                std::cout << "Exiting!" << std::endl;
                break;
            }
            else if (menuchoice == "add")
            {
                std::cout << "Add" << std::endl;
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << "Second number" << std::endl;
                num2 = getnumber();
                std::cout << add(num1, num2) << std::endl;

            }
            else if (menuchoice == "subtract")
            {
                std::cout << "Subtract" << std::endl;
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << "Second number" << std::endl;
                num2 = getnumber();
                std::cout << subtract(num1, num2) << std::endl;
            }
            else if (menuchoice == "multiply")
            {
                std::cout << "Multiply" << std::endl;
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << "Second number" << std::endl;
                num2 = getnumber();
                std::cout << multiply(num1, num2) << std::endl;
            }
            else if (menuchoice == "divide")
            {
                std::cout << "Divide" << std::endl;
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << "Second number" << std::endl;
                num2 = getnumber();
                std::cout << divide(num1, num2) << std::endl;
            }

            else if (menuchoice == "circlearea")
            {
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << circlearea(num1) << std::endl;
            }

            else if (menuchoice == "circlediameter")
            {
                std::cout << "First number" << std::endl;
                num1 = getnumber();
                std::cout << circlediameter(num1) << std::endl;
            }
            else
            {
                std::cout << "Unknown input, try again" << std::endl << std::endl;
                drawmenu();
            }
        }
    return 0;
}


