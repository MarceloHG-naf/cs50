#include<stdio.h>

int score(char word[]);

int main(void){
    char word1[50];
    char word2[50];
    int total1 = 0;
    int total2 = 0;

    printf("Player 1: ");
    scanf("%49s",word1);
    printf("Player 2: ");
    scanf("%49s",word2);

    total1= score(word1);
    total2 = score(word2);
 
    if(total1>total2){
        printf("Player 1 wins\n");
    }
    else if(total2>total1){
        printf("Player 2 wins\n");
    }
    else{
        printf("Tie!\n");
    }
    return 0;
}

int score(char word[]){
    int count=0;
    int total=0;
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    while(word[count]!='\0'){
        if(word[count]>='A' && word[count]<='Z'){
            word[count]+=32;
        }
        if(word[count]>='a'&& word[count]<='z'){
            total += points[word[count] - 'a'];
        }
        count++;
    }
    return total;

}