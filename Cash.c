#include <stdio.h>

int changeCalculator(int total);

int main(void){
    int total=-1;
    while(total<0){
        printf("Change owed: ");
        scanf("%d", &total);
    }
    int change = changeCalculator(total);
    printf("%d\n", change);
    return 0;
}


int changeCalculator(int total){
    int coins[4]= {25,10,5,1};
    int change=0;
    int i=0;


    while(total>0){
        if(total-coins[i]>=0){
            change++;
            total -= coins[i];
        }
        else{
            i++;
        }
    }
    return change;
}