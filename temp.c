#include<stdio.h>
int main(){
	int time;
	double t;

	printf("Enter the time in hours");
	scanf("%d", &time);

	t=((4*time*time)/(time+2))-20;

	printf("the estimate temp is %lf", t);

	return 0;
}
	

