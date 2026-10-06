#include <iostream>
int a = 1;

int main()
{
    using namespace std;
    int a = 10; 
    cout << a << endl;  //hiding global variable with a local variable
    cout << :: a << endl;  //using global variable
    return 1;



}