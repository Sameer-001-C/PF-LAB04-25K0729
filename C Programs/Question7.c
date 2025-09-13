#include <stdio.h>
#include <string.h>

int main(){
	char password[50];
	printf("Please Enter Your Password: ");
	scanf("%s", password);
	if (strcmp(password, "1234") == 0) {
		printf("Access Granted.");	
	}
	else {
		printf("Access Denied.");
	}
	return 0;
}
