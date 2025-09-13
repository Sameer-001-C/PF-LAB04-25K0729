#include <stdio.h>

int main(){
	int temperature;
	printf("Please enter the tempereature: ");
	scanf("%d", &temperature);
	if (temperature > 30) {
		printf("Too Hot.");
	}
	else {
		printf("Pleasant Day.");
	}
	return 0;
}
