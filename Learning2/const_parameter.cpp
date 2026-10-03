#include <iostream>
void printInfo(const std::string &name, const int &age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references
 
    std::string name = "Prem";
    int age = 17;
 
    printInfo(name, age);
 
    return 0;
}
void printInfo(const std::string &name, const int &age){  //now we cant change the values of name and age by accident
    //name = "";
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}