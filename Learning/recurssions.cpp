#include <iostream>
void walk(int steps);
void walk2(int n);
int factorial(int num);
int main(){
    /* recursion = a programming technique where a function
        invokes itself from within
        break a complex concept into a repeatable single steps.

        (iterative vs recursive)
        advantages = less code and is cleaner
        useful for sorting and searching algorithms

        disadvantages = uses more memory
        slower */

    walk(100);
    walk2(100);

    std::cout << factorial(10);

    return 0;
}

    void walk(int steps){        //recursive walking 
        if(steps > 0){
        std :: cout << "You take a step!\n";
        walk(steps - 1);
        }
    }

    void walk2(int n){             //using for loop 
        for (int i =n ; i > 0; i--){
            std :: cout << "You take " << i << " step!\n";
        }
    }


    int factorial(int num){           //recursive approach!!!
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
