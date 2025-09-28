#include <stdio.h>
int main(){
	float attendance;
	char confirm;
	printf("What is your attendance percentage: ");
	scanf("%f",&attendance);
	if(attendance<75){
		printf("You are not eligible for the final exams!");
		return 0;
	}
	printf("Have you passed your midterm exam?(P/F)\t");
	scanf(" %c",&confirm);
	if(confirm != 'P' && confirm != 'p'){
		printf("You are not eligible for the final exams!");
		return 0;
	}
	printf("Have you paid the exam fees?(y/n)\t");
	scanf(" %c",&confirm);
	if(confirm != 'y' && confirm !='Y'){
		printf("Please clear your dues to appear in the Final Exam!");
	}
	else{
		printf("You are eligible for the final exams!");
	}
}
