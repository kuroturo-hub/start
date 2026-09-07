#include <iostream>

int main() 
{
   std::string name;
   
   while(name.empty()){
      std::cout << "Enter your name: ";
      std::getline(std::cin, name);
   }
   
   std::cout << "Hello " << name;
   
   for(int i = 10; i > 0; i--){
      //count down to 10
      std::cout << i << '\n';
   }
 
   std::cout << "HAPPY NEW YEAR!\n";  
   return 0;

}