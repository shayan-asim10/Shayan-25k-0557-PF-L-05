#include <stdio.h>

int main(){
	int correct_pin = 1234;
	int pin, amount, total;
	int balance = 10000;
	printf("Enter your PIN: ");
	scanf("%d", &pin);
	if(pin != correct_pin){
		printf("Invalid PIN!");
		return 0;
	}
	printf("Enter the withdrawal amount: ");
	scanf("%d", &amount);
	if(amount>balance){
		printf("Insufficient Balance!");
		return 1;
	}
	total = balance - amount;
	printf("Your remaining amount is: %d", total);
	return 2;
}
