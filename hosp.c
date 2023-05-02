#include<stdio.h>
int main(){
	double vol;
	double min;
	double hour;
	double infusionrate;

	printf("enter the vol in ml:");
	scanf("%lf",&vol);

	printf("the volume in ml is %lf",vol);

	printf("enter the time in min:");
	scanf("%l",&min);

	hour=min/60;

	printf("the time in hour is %lf",hour);

	infusionrate=(vol)/(hour);

	printf("infusion rate is %lf",infusionrate);

	return 0;
}



	
