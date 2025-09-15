#include <stdio.h>
int main(){
	int m1,m2,m3;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&m1,&m2,&m3);
	m1>m2 ? printf("Largest number is %d",m1) : m2>m3? printf("Largest number is %d",m2) : printf("Largest number is %d", m3);
}
