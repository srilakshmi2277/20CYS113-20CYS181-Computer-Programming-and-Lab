#include<stdio.h>
int main()
{
    int rows , i , j ,k;
    scanf("%d",&rows);
    if (0<rows&& rows<25){
    for (i = 1; i <= rows; i++){
        for (k = 1;k<= rows-i;k++){
          printf("  ");
        }
        for (j=1;j<=2*i-1;j++){
            printf("* ");  
        }
        printf("\n");
        }
     }
     else {
        printf("Invalid Input");
     }
    return 0;
}

