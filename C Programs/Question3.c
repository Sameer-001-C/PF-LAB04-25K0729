#include <stdio.h>

int main(){
	int num1;
	int num2;
	int num3;
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	printf("Please enter the third number: ");
	scanf("%d", &num3);
	
	if ((num1 == num2) && (num2 == num3)) {
        printf("All three numbers are equal");
    }
	else if ((num1 == num2) && (num1 > num3)) {
        printf("First and Second are equal and largest");
    }
	else if ((num1 == num3) && (num1 > num2)){
        printf("First and Third are equal and largest");
    }
	else if ((num2 == num3) && (num2 > num1)) {
        printf("Second and Third are equal and largest");
    }
	else if (num1 > num2){
		if (num1 > num3){
			printf("First Number is the Largest");
		}
		else {
			printf("Third Number is the largest");
		}
	}
	else if (num2 > num3) {
		printf("Second Number is the largest");
	}
	else {
		printf("Third Number is the largest");
	}
	return 0;
}
