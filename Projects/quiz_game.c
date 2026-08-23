#include <stdio.h>
void main(){
    char questions[][200]={{"What is a four-letter word that ends in 'k', means to have intercourse, and\nif you can't get it, you can always use your hand?"},
                            {"What goes in hard and dry, but comes out soft, warm, and sticky?"},
                            {"What is long, hard, and has cum in the middle?"},
                            {"What gets wetter and wetter the more it dries?"},
                            {"What is six inches long, goes in your mouth, has a head with bristles, and\nmakes you spit when you're done?"}};
    
    char options[][100]={{"A) Fork\nB) Talk\nC) Pork\nD) Book"},
                          {"A) Chewing gum\nB) Toast\nC) Candle wax\nD) Ice cube"},
                          {"A) Aluminum\nB) Cucumber\nC) Document\nD) Circumference"},
                          {"A) A sponge\nB) A towel\nC) Sunblock\nD) Hairdryer"},
                          {"A) Toothbrush\nB) Flute\nC) Whistle\nD) Pipe"}};

    char answers [] = {'B','A','B','B','A'};
    char a ='\0';
    int counter =0;

    for(int i=0 ; i<5 ; i++){
        printf("%s\n",questions[i]);
        printf("%s\n",options[i]);
        printf("\nEnter your choice (A,B,C,D): ");
        scanf(" %c", &a);

        if (a==answers[i]){ 
            printf("CORRECT!!\n\n");
            counter += 1;
        }
        else printf("WRONG!!\n\n");
    }
    
    printf("Your score is %d out of 5 points",counter);

    switch(counter){
        case 5:case 4:case 3: printf("Congratulations, You passed the sus quiz");
                              break;
        case 2: case 1: case 0: printf("Better luck next time");
                                break;
    }
}