#include <stdio.h>

int main(){
	int Age;
	printf("Please enter your Age: ");
	scanf("%d", &Age);
	if (Age >= 18) {
		printf("Eligible to vote.");
	}
	else {
		printf("Not Eligible.");
	}
	return 0;
}
