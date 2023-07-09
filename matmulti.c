#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX],b[MAX][MAX],result[MAX][MAX];
    int i,j,k,arows,acolumns,brows,bcolumns;
    int sum=0;
    printf("enter the rows and coumns for a\n");
    scanf("%d %d",&arows,&acolumns);
    printf("enter the rows and coumns for b\n");
    scanf("%d %d",&brows,&bcolumns);
    
    if(brows!=acolumns){
        printf("matrix multiplication not possible");
    }
    else{
        for(i=0;i<arows;i++){
            for(j=0;j<acolumns;j++){
                scanf("%d",&a[i][j]);
            }
	    printf("\n");
        }
         for(i=0;i<brows;i++){
            for(j=0;j<bcolumns;j++){
                scanf("%d",&b[i][j]);
            }
         }
         for(i=0;i<arows;i++){
             for(j=0;j<bcolumns;j++){
                 for(k=0;k<brows;k++){
                     sum=sum+a[i][k]*b[j][k];
                 }
                 sum=result[i][j];
                 sum=0;
             }
         }
          for(i=0;i<arows;i++){
             for(j=0;j<bcolumns;j++){
                printf("%d",result[i][j]);            
        }
         printf("/n");
       }
    }
    return 0;
}

