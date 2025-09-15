#include <stdio.h>
int main(){
	int n,ans;
	printf("Enter a number: ");
	scanf("%d", &n);
	(n%2==0) ? printf("Divisible by 2") : (n%3==0)? printf("Divisible by 3") : printf("Odd and not divisible by 3");
}
