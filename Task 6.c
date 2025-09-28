#include <stdio.h>

int main(){
	int a = 5;
	int b = 11;
	printf("\nToday we are going to evaluate the expression, (a&b) | (a^b)");
	printf("\na\t5\t0101");
	printf("\nb\t11\t1011");
	int c = a&b;
	printf("\n\na&b\t \t0001");
	printf("\na&b = %d",c);
	printf("\n\nNow a^b!");
	printf("\na\t4\t0101");
	printf("\nb\t8\t1011");
	printf("\n\na^b\t \t1110");
	int d = a^b;
	printf("\na^b = %d",d);
	printf("\n\nNow time to evaluate (a&b) | (a^b)");
	int e = c | d;
	printf("\na&b\t \t0001");
	printf("\na^b\t \t1110");
	printf("\n\n(a&b) | (a^b)\t1111");
	printf("\n(a&b) | (a^b) = 15");
	return 0;
}
