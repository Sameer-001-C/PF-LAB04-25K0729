#include <stdio.h>

int main(){
	int Age;
	int Price;
	printf("Please Enter Your Age: ");
	scanf("%d", &Age);
	if (Age < 12){
		Price = 200;
	}
	else if (Age < 18){
		Price = 300;
	}
	else if (Age < 61){
		Price = 500;
	}
	else {
		Price = 250;
	}
	printf("Ticket Price = %d", Price);
	return 0;
}
