#include <stdio.h>

int main(){
	char color, time;
	printf("What is the signal color?(R,Y,G)\n");
	scanf(" %c", &color);
	switch(color){
		case 'r':
		case 'R':
			printf("\nIs the time 22:00 hrs or later?(y/n)\n");
			scanf(" %c", &time);
			if(time == 'y' || time == 'Y'){
				printf("\nStop, but night caution allowed!");
			return 0;	
			}
			else{
				printf("\nStop and wait!");
			}
			break;
		case 'y':
		case 'Y':
			printf("\nGet ready!");
			break;
		case 'g':
		case 'G':
			printf("\nGo!");
			break;
		default:
			printf("\nInvalid signal!");
	}
}
