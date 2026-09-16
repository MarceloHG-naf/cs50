#include <stdio.h>

int main(void){
    int card[16];
    int multi = 0;
    long long number;
    int count = 0;
    printf("Number: ");
    scanf("%lld", &number);
    while(number>0){
        card[count]= number%10;
        number/=10;
        count++;
    }
    for(int i=0;i<count;i++){

        if(i%2==0){
            multi+=card[i];
        }
        else if(card[i]*2>9){
            multi += card[i]*2-9;
        }
        else{
            multi += card[i]*2;
        }   
    }
    printf("multi = %d, count = %d\n", multi, count);
    if(multi%10!=0){
        printf("Invalid\n");
    }
    else if(count==15 && (card[count-1]==3 && (card[count-2]==4||card[count-2]==7))){
        printf("AMEX\n");
    }
    else if(count==16 && (card[count-1]==5 && (card[count-2]>=1 && card[count-2]<=5))){
        printf("MASTERCARD\n");
    }
    else if((count==13||count==16) && card[count-1]==4){
        printf("VISA\n");
    }   
    else{
        printf("Invalid\n");
    }
    return 0;
}