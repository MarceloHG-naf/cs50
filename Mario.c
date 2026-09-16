#include <stdio.h>

void draw(int height);

int main(void){
    int height=-1;
    while(height < 1 || height > 8){
        printf("Height: ");
        scanf("%d", &height);
    }
    draw(height);
    return 0;
}


void draw(int height){
    int j = height;
    for(int i=0;i<height;i++){
        for(int b=0;b<j-1;b++){
            printf(" ");
        }
        for(int a=0;a<=i;a++){
            printf("#");
        }
        printf("  ");
        for(int a=0;a<=i;a++){
            printf("#");
        }
        j--;
        printf("\n");
    }
}