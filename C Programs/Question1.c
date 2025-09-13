#include <stdio.h>

int main(){
	float Bill;
	float Discount;
	printf("Please Enter Your Bill Amount: ");
	scanf("%f", &Bill);
	if (Bill > 5000){
		Discount = Bill * 0.1;
		Bill = Bill - Discount;
	}
	printf("Final Payable Amount = %.2f", Bill);
	return 0;
}
