#include <stdio.h>

int main(){
	float num1;
	float num2;
	char oper;
	float result;
	printf("Format:\nFirst Number | Operator | Second Number\n\n");
	printf("Please Enter First Number: ");
	scanf("%f", &num1);
	printf("Please Enter An Operator (+, -, *, /): ");
	scanf(" %c", &oper);
	printf("Please Enter Second Number: ");
	scanf("%f", &num2);
	switch (oper) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 == 0) {
				printf("\nMathematical Error. Cannot Divide By Zero.");
				return 1;
			}
			else {
				result = num1 / num2;
			}
			break;
		default:
    		printf("\nInvalid operator.\n");
    		return 1;
	}
	printf("Answer = %.2f", result);
	return 0;
}
