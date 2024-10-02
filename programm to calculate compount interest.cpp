# include <stdio.h>
#include<math.h>
int main(){
	int time,n;
	float amount;
	float rate;
	double principal;
	float CI;
	
	//prompt the user for time 
	printf("ENTER THE TIME \n");
	scanf("%d",&time);
	
	//prompt the user for 
	printf("ENTER THE N \n");	
	scanf("%d",&n);
	
	printf("ENTER RATE \n");
	scanf("%f",&rate);
	
	printf(" ENTER THE AMOUNT \n");
	scanf("%f",&amount);
	
	printf("ENTER THE PRINCIPAL \n");
	scanf("%lf",&principal);
	
	
	// formular to calclate amount 
    amount = principal* pow((1+rate/n),n*time);
    printf("amount %f \n");
    // formular to calculate compound interest
    CI = amount - principal;
	printf("compount interest is%f\n",CI);
	
	
	
	return 0;
}