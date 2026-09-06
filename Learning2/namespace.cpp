#include <iostream>
namespace first{
    int x =10;
    int y=0;
}
namespace second{
    int x =20 , y =4;
}
int main(){
    //int x =0 , y =100 ;;
    //x =1;
    //std::cout << x << '\n' << first::x << second::x << '\n' <<second::y  << '\n';

    using namespace second;
    std::cout << x << '\n' << y << '\n' << first::x << '\n\n';

    //cutting repetition
    using namespace std;
    cout << x << '\n';

    //since lots of naming conflict with std ---> safer method 
    using std::cout;
    using std::string;
    string name = "prem";
    cout << "My name is " << name << '\n';
    
    return 0;
}