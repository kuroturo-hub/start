#include <iostream>
 
double getTotal(double prices[], int size);
 
int main()
{
   double prices[] = {49.99, 15.05, 75, 9.99};
   int size = sizeof(prices)/sizeof(prices[0]);
   double total = getTotal(prices, size);
 
   std::cout << "The total is: $" << total;
 
   return 0;
}
double getTotal(double prices[], int size)  //WE ARE ALSO GETTING SIZE HERE cuz when we pass something in a function as parameter it decays into a pointer (called function decay)
                                            //Function has no idea how big the array is cuz now we are working with a pointer.
{
    double total = 0;              
 
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
 
    return total;
}