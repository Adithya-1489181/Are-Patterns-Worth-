/*All the outputs of the patterns are given below.
These are simple patterns representing square kind of structures*/

#include<stdio.h>

int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(int i =1;i<=row;i++){
        for(int j =1;j<=row;j++){
            if(i==1||j==1||i==row||j==row){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}