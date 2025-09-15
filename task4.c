#include <stdio.h>
#include <math.h>
int main(){
	float r, area, circumference, sqrtr;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area = M_PI*pow(r,2);
	circumference = 2*M_PI*r;
	sqrtr = sqrt(r);
	printf("\nArea is: %.2f",area);
	printf("\nCircumference is: %.2f",circumference);
	printf("\nSquare root of radius is: %.2f",sqrtr);
}
