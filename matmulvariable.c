#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX],b[MAX][MAX],result[MAX][MAX];
    int i,j,k,m,n;
   result[i][j]=0;
    scanf("%d",&m);
    scanf("%d",&n);

        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             scanf("%d",&a[i][j]);             
        }
    }
    
    for(i=0;i<m;i++){
         for(j=0;j<n;j++){
             scanf("%d",&b[i][j]);             
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             result[i][j]=0;
            for(k=0;k<n;k++){
                 result[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             printf("%d \t",result[i][j]);
        }
         printf("\n");
    }
    return 0;
}
