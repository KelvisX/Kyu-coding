#include <stdio.h>
int main(){
	//declera variables
	int time;
	float principal;
	double interest;
	int rate;
	
	printf("ENTER THE TIME\n");
	scanf("%d",&time); 
	 
	printf("ENTER THE PRINCIPAL\n");
	scanf("%f",&principal);
	
	printf("ENTER THE RATE\n");
	scanf("%d",&rate);
	
	//formular to calculate simple intereste
	double SI = (principal*rate*time)/100;
	printf("SIMPLE INTEREST: %lf",SI);
	
	return 0;
}