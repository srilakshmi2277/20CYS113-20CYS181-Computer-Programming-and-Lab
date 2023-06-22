#include<stdio.h>
struct complexnumbers{
	int a[2];
	int b[2];
	int num[2];
}c;
int main(){
	int i;
	for(i=0;i<2;i++){
		scanf("%d",&c.a[i]);
		scanf("%d",&c.b[i]);
		printf("c.num[i] is:%d+i%d",c.a[i],c.b[i]);
	}
	return 0;
}


