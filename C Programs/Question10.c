#include <stdio.h>

int main(){
	float balance = 1600;
	int amount;
	printf("Please enter the amount to be withdrawn: ");
	scanf("%d", &amount);
	if (balance >= amount){
		if (amount % 500 == 0) {
			balance = balance - amount;
			printf("Money withdrew successfully.\n");
			printf("Current Balance: %.2f", balance);
		}
		else {
			printf("Please enter a multiple of 500.");
		}
	}
	else {
		printf("Insufficient Balance.");
	}
	return 0;
}
