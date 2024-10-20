#include <stdio.h>
int main(){
	
	int age;
	float salary;
	
	printf("Enter Your Age.\n");
	scanf("%d",&age);
	printf("Enter your Annual Salary\n");
	scanf("%f",&salary);
	
	if (age >= 21 && salary >= 21000) {
		
	printf("Congratulations You Qualify For A Loan");	
		
	} else {
		
		printf("Unfortunately, We Are Unable To Offer You A Loan At This Time");
	}
	
	
	
	
	return 0;
}
