#include <stdio.h>
#include <stdbool.h>
void diag(int c , int player );
void won(int player);
int x[3][3] ={{10,2,3},{4,5,6},{7,8,9}};
bool win = false;
int main(){
    int i , j ;
    printf("THIS is a local TIC TAC TOE GAME\nPLAYER 1: 'X'\nPLAYER 2: 'O'\nEnter the row:coloumn as : 12\nHere 12 means 1st row and 2nd coloumn\nGOOD LUCK!! <3\n");
    
    while (!win){
        printf("Player 1 turn: ");
        scanf("%1d%1d",&i , &j);
        x[i-1][j-1] = 1;
        printf ("\n_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n\n",(x[0][0]==1)?'X':((x[0][0]==0)?'O':'_'),(x[0][1]==1)?'X':((x[0][1]==0)?'O':'_'),(x[0][2]==1)?'X':((x[0][2]==0)?'O':'_'),
                                                                     (x[1][0]==1)?'X':((x[1][0]==0)?'O':'_'),(x[1][1]==1)?'X':((x[1][1]==0)?'O':'_'),(x[1][2]==1)?'X':((x[1][2]==0)?'O':'_'),
                                                                     (x[2][0]==1)?'X':((x[2][0]==0)?'O':' '),(x[2][1]==1)?'X':((x[2][1]==0)?'O':' '),(x[2][2]==1)?'X':((x[2][2]==0)?'O':' '));
        won(1);
        if(win==true) break;

        printf("Player 2 turn: ");
        scanf("%1d%1d",&i , &j);
        x[i-1][j-1] = 0;
        printf ("\n_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n\n",(x[0][0]==1)?'X':((x[0][0]==0)?'O':'_'),(x[0][1]==1)?'X':((x[0][1]==0)?'O':'_'),(x[0][2]==1)?'X':((x[0][2]==0)?'O':'_'),
                                                                     (x[1][0]==1)?'X':((x[1][0]==0)?'O':'_'),(x[1][1]==1)?'X':((x[1][1]==0)?'O':'_'),(x[1][2]==1)?'X':((x[1][2]==0)?'O':'_'),
                                                                     (x[2][0]==1)?'X':((x[2][0]==0)?'O':' '),(x[2][1]==1)?'X':((x[2][1]==0)?'O':' '),(x[2][2]==1)?'X':((x[2][2]==0)?'O':' '));
        won(2);

        }
}

void won (int player){
        for (int u=0; u < 3 ; u++){
                int v =0;
                if (x[u][v] == x[u][v+1] && x[u][v+1] == x[u][v+2]){
                        printf ("PLAYER %d WON\nYOU DUMBFUCK!!\n",(player==1)?1:2);
                        win=true;
                }
        }
        for (int v=0; v <3 ; v++){
                int u =0;
                if (x[u][v] == x[u+1][v] && x[u+1][v] == x[u+2][v]){
                        printf ("PLAYER %d WON\nYOU DUMBFUCK!!\n",(player==1)?1:2);
                        win=true;
                }
        }
        if (x[0][0]==x[1][1] && x[1][1]==x[2][2]){
                printf ("PLAYER %d WON\nYOU DUMBFUCK!!\n",(player==1)?1:2);
                win=true;
        }
        else if (x[0][2]==x[1][1] && x[1][1]==x[2][0]){
                printf ("PLAYER %d WON\nYOU DUMBFUCK!!\n",(player==1)?1:2);
                win=true;
        }
}
