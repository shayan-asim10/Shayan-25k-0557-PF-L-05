#include <stdio.h>

int main() {
	char size,type;
	int item, coffee, price, combo;
	printf("Welcome to the Coffee Shop! Please choose your section!\n1. Burger Hub\n2. Ice cream Parlour\n3. Coffee Shop\n");
	scanf("%d",&item);
	if(item == 1 || item == 2){
		printf("\nThe order will be held by the respective section. This is the coffee section!");
		return 0;
	}
	else if(item == 3){
		printf("\nCoffee size: (S/M/L)\n");
		scanf(" %c",&size);
		if(size == 's' || size == 'S'){
			price = 300;
		}
		else if(size == 'm' || size == 'M'){
			price = 450;
		}
		else if(size == 'L' || size == 'l'){
			price = 650;
		}
		else{
			printf("Wrong size!");
			return 1;
		}
		printf("How many coffees do you want?\n");
		scanf("%d", &coffee);
		if(coffee>1 && (size == 'S' || size == 's')){
			printf("\nCheck our combo offers!\n1. 2 small coffees + 1 bread sticks = 700!\n2. 5 small coffees = 1350!(10%% off!)\n3. 3 small + 2 bread sticks = 950\n4. No combo\n");
			scanf("%d",&combo);
			if(combo == 1){
				price = 700;
			}
			else if(combo == 2){
				price = 1350;
			}
			else if(combo == 3){
				price = 950;
			}
			else{
				price = price*coffee;
			}
		}
		else if(coffee>1 && (size == 'M' || size == 'm')){
			printf("\nCheck our combo offers!\n1. 3 medium coffees, 1 bread sticks free!\n2.2 mediums + 2 breadsticks = 1,000\n3. No combo\n");
			scanf("%d",&combo);
			if(combo == 1){
				price = 3*price;
			}
			else if(combo == 2){
				price = 1000;
			}
			else{
				price = price*coffee;
			}
		}
		else if(coffee>1 && (size == 'L' || size == 'l')){
			printf("\nCheck our combo offers!\n1. 1 large coffee + 1 bread sticks = 720\n2. 3 large coffees, 2 bread sticks free!\n3. 5 large coffees, 1 large coffee free!\n4. No combo!\n");
			scanf("%d", &combo);
				if(combo == 1){
					price = 720;
				}
				else if(combo == 2){
					price = price*3;
				}
				else if(combo == 3){
					price = price*5;
				}
				else{
					price = price*coffee;
				}
			}
		else{
			price = price*coffee;
		}
		printf("\nWhat is your coffee type?(R,C,L)\n");
		scanf(" %c",&type);
		printf("\nYour total bill is: %d", price);
	}
	else{
		printf("Unidentified option!");
		return 2;
	}
	return 3;
}
