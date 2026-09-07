#include <iostream>

int main()
{
    char a = 'A';
    char b[3]="Hi";
    std::string cars[3] = {"Corvette", "Mustang", "Camry"};

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << a << b;

    return 0;
}