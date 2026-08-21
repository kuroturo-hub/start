#include <stdio.h>
int main(){
    /*Write a program that uses printf to display the following picture on the screen. (Without LOOP)
                                                         *
                *
               *
              *
      *      *
        *   *
          *
    */


    char a='*';
    printf("%10c\n",a);
    printf("%9c\n",a);
    printf("%8c\n",a);
    printf("%1c %5c\n",a,a);
    printf("%2c %3c\n",a,a);
    printf("%3c %1c\n",a,a);
    printf("%4c",a);
    
    return 0;


}