#include <stdio.h>

int main(){
	printf("We are to evaluate the expression: x + y * z > 10 && x - z < y || !(y %% z)");
	printf("\nEnter x,y,z\n");
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("\nx = %d\ty = %d\tz = %d",x,y,z);
	int step1 = y*z;
	printf("\ny*z=%d",step1);
	int step2 = step1+x;
	printf("\nx+y*z=%d",step2);
	int step3 = step2>10;
	printf("\n(x+y*z)>10=%d",step3);
	int step4 = x-z;
	printf("\nx-z=%d",step4);
	int step5 = step4<y;
	printf("\nx-z<y=%d",step5);
	int step6 = step3 && step5;
	printf("\nx + y * z > 10 && x - z < y = %d",step6);
	int step7 = y%z;
	printf("y%%z=%d",step7);
	int step8 = !(step7);
	printf("!(y%%z)=%d",step8);
	int step9 = step6 || step8;
	printf("x + y * z > 10 && x - z < y || !(y %% z) = %d",step9);
}
