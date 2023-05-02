#include<stdio.h>
#define REWARD_PER_KM 25
int main(){
	double initialreading;
	double finalreading;
	double km;
	double reward

	printf("enter the initial reading of odometer:");
	scanf("%lf",&initialreading);

	printf("enter the final reading of odometer:");
	scanf("%lf",&finalreading);

	km=finalreading-initialreading;

	reward=km*(REWARD_PER_KM);

	printf("the reward is %lf",reward);

	return 0;
}




