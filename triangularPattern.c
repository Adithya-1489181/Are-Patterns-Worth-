/*All the outputs of the patterns are given below.
These are simple patterns representing triangular kind of structures*/

//Output:

/*

Enter the number of rows: 3
Pattern 1:
* 
* * 
* * * 
Pattern 2:
* * * 
* * 
* 
Pattern 3:
* * * 
  * * 
    * 
Pattern 4:
* * * 
 * * 
  * 
Pattern 5:
    * 
  * * 
* * * 
Pattern 6:
    * 
  * * * 
* * * * * 


*/

#include<stdio.h>

int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Pattern 1:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 2:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=(row-i)+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("Pattern 3:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i<=j){
                printf("* ");   
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Pattern 4:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i<=j){
                printf("* ");   
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Pattern 5:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j>=(row-i)+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Pattern 6:\n");
    for(int i = 1; i <= row; ++i) {
        for(int j = 1; j <= row - i; j++) {
            printf("  ");
        }
        for(int j = 1; j <= i; ++j) {
            printf("* ");
        }
        for(int j = 1; j < i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}