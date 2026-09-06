#include <iostream>
int main(){
    int x = 100 , y = 100;
    char grade ='A';
    std::string name ="Prem";
    bool love = true;
    float pi = 3.14;

    std::cout << grade << '\n';
    std::cout << x + y << '\n';
    std::cout << name << '\n';
    std::cout << love <<'\n';

    std::cout << "Hello " << name << "\nYour grade is: " << grade ;
    return 0;
}