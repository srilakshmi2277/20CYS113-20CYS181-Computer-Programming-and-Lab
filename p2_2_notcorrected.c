#include<stdio.h>
int main(){
	int i,j,space;
	int coeff=1;
	int rows=8;
	for(i=0;i<rows;i++){
		for(space=1;space<rows-i;space++){
		printf(" ");
		for(j=0;j<=i;j++){
			if(i==0||j==0){
				coeff=1;
			}
			else{
				coeff=coeff+(i+j-1)/j;
			}
			printf("%4d",coeff);
		}
	}
	printf("\n");
	}
	return 0;
}
