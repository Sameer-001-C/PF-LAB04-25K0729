#include <stdio.h>

int main(){
	int attendance;
	int marks;
	printf("Please enter your attendance: ");
	scanf("%d", &attendance);
	if (attendance >= 75){
		printf("Please enter your marks: ");
		scanf("%d", &marks);
		if (marks >= 40) {
			printf("You can appear in the final exams.");
		}
		else {
			printf("You cannot appear in the final exam. Marks too low.");
		}
	}
	else {
		printf("You cannot appear in the final exam. Attendance too low.");
	}
	return 0;
}
