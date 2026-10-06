#include <iostream>
int main(){
   /* DYnamic Memory:  Memory that is allocated after the program
                        dynamic.memory is already compiled & running.
                        Use the 'new' operator to allocate
                        memory in the heap rather than the stack

                        Useful when we don't know how much memory
                        we will need. Makes our programs more flexible,
                        especially when accepting user input. */
    
    
    char *pGrades = NULL;  //creating a null pointer
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];  //new operator returns an address and we are allocating that address to pGrades
                                // where we are storing an array.

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; //good practice to prevent a memory leak 
                      //since we are deleting an array we are using delete[] , normally delete would suffice.

    return 0;
}