#include<stdio.h>
int main(){
    int num,r,originalnum;
    scanf("%d",&num);
    originalnum=num;
    //  for Reversing the number
    int reverse=0;
    
    while(num!=0){
        r=num%10;
        reverse=reverse*10+r;
      num=num/10;
    }
    // Checking if the reversed number is equal to the original number
    if (originalnum == reverse){
    printf("Is a palindrome.");
    }
    else{
    printf("Is not a palindrome.");
    }
    return 0;
    
        
}
