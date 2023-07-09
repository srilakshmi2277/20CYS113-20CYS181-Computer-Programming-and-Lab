#include<stdio.h>
int isprime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
      if(n%i==0){
          c++;
      }
    }    
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}
void generateprime(int s,int e){
    int j;
     printf("Prime numbers between %d and %d are:\t",s,e);
    for(j=s;j<=e;j++){
        int r=isprime(j);
        if(r==1){
        printf("%d\t",j );
        }
    }
}
int main(){
    int s,e;
    scanf("%d",&s);
    scanf("%d",&e);
   
    generateprime(s,e);
    return 0;
}
