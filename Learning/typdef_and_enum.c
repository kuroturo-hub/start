#include <stdio.h> 
enum grade {F,E,D,C,B,A};
typedef enum{SUN = 1, MON, TUE, WED, THU, FRI, SAT} day;
int main() {
    day today = MON;

    switch (today) {
        case 1:
            printf("Today is Sunday\n");
            break;
        case 2: case 3: case 4: case 5: case 6: case 7:
            printf("TODAY IS NOT SUNDAY\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    printf("%d\n", today);

    printf("A = %d\n",A);
    enum grade yours= F;
    printf("%d is your grade point",yours);
    return 0;
}