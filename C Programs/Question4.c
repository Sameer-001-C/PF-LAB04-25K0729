#include <stdio.h>

int main(){
	int Age;
	int Salary;
	printf("Please enter your Age: ");
	scanf("%d", &Age);
	if (Age >= 24) {
		printf("Please enter your Salary: ");
		scanf("%d", &Salary);
		if (Salary >= 40000){
			printf("Your loan request has been approved");
		}
		else {
			printf("Your loan request has been rejected.");
		}
	}
	else {
		printf("Sorry, you are not old enough for a loan.");
	}
	return 0;
}
