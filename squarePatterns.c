/*All the outputs of the patterns are given below.
These are simple patterns representing square kind of structures*/

//Output:

/* 

Enter the number of rows: 3
Patten 1:
* * * 
* * * 
* * * 
Pattern 2:
111
222
333
Pattern 3:
123
123
123
Pattern 4:
123
456
789
Pattern 5:
ABC
ABC
ABC
Pattern 6:
AAA
BBB
CCC
Pattern 7:
ABC
DEF
GHI
Pattern 8:
ZYX
ZYX
ZYX
Pattern 9:
ZYX
WVU
TSR
Pattern 10:
101
010
101
Pattern 11:
101
101
101

*/

#include<stdio.h>

int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Patten 1:\n");    
    for(int i=1;i<=row;i++){       
        for(int j=1;j<=row;j++){   
            printf("* ");          
        }
        printf("\n");
    }
    printf("Pattern 2:\n");      
    for(int i=1;i<=row;i++){        
        for(int j=1;j<=row;j++){    
            printf("%d",i);         
        }
        printf("\n");
    }
    printf("Pattern 3:\n");       
    for(int i=1;i<=row;i++){        
        for(int j=1;j<=row;j++){    
            printf("%d",j);         
        }
        printf("\n");
    }
    int a = 1;
    printf("Pattern 4:\n");     
    for(int i=1;i<=row;i++){        
        for(int j=1;j<=row;j++){    
            printf("%d",a++);       
        }
        printf("\n");
    }
    printf("Pattern 5:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    printf("Pattern 6:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
    printf("Pattern 7:\n");
    a=65;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c",a++);
        }
        printf("\n");
    }
    printf("Pattern 8:\n");
    for(int i=1;i<=row;i++){
        a=90;
        for(int j=1;j<=row;j++){
            printf("%c",a--);
        }
        printf("\n");
    }
    printf("Pattern 9:\n");
    a=90;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%c",a--);
        }
        printf("\n");
    }
    printf("Pattern 10:\n");
    a = 1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("%d",a%2);
            a++;
        }
        printf("\n");
    }
    printf("Pattern 11:\n");
    for(int i=1;i<=row;i++){
        a = 1;
        for(int j=1;j<=row;j++){
            printf("%d",a%2);
            a++;
        }
        printf("\n");
    }
}