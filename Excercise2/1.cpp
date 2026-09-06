//Hypotunese Calculator
#include <iostream>
#include <cmath>
int main(){
    float a , b ,c;
    std::cout << "Enter the height of the right angled triangle: ";
    std::cin >> a;

    std::cout << "Enter the base of the right angled triangle: ";
    std::cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "THe hypotunese is: " << c;

    return 0;
}