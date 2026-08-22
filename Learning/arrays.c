#include <stdio.h>
#include <windows.h>
int main(){
    int a[]={1,2,3,4,5};
    char b[]={'A','B','C'};
    char c[]="Prem YO YO";

    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){   //basically the big expreesion gib the elements in arrays
                                                  //if we not know :)
            printf("%d ",a[i]);
    }
    
    c[8]='D';
    printf("\n%s\n",c);

    for(int j=0; j<sizeof(c)/sizeof(char) ; j++){
        printf("%c\n",c[j]);
        Sleep(1000);
        
    }
    return 0;
}