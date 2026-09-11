#include <iostream>

int main()
{
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        std::cout << grades[i] << '\n';
    }

    for(char gay : grades){
        std::cout << gay << '\n';
    }

    return 0;
}