#include <stdio.h>
void main(){
	char c1,c2,c3;
	int vowel = 0, consonant = 0;
printf("Enter 3 characters: ");
scanf(" %c %c %c",&c1,&c2,&c3);
if(c1== 'a' || c1 == 'A' || c1 == 'e' || c1 == 'E' || c1 == 'i' || c1 == 'I' || c1 == 'o' || c1 == 'O' || c1 == 'u' || c1 == 'U'){
	vowel++;
}
else{
	consonant++;
}
if(c2 == 'a' || c2 == 'A' || c2 == 'e' || c2 == 'E' || c2 == 'i' || c2 == 'I' || c2 == 'o' || c2 == 'O' || c2 == 'u' || c2  == 'U'){
	vowel++;
}
else{
	consonant++;
}
if(c3 =='a' || c3 == 'A' || c3 == 'e' || c3 == 'E' || c3 == 'i' || c3 == 'I' || c3 == 'o' || c3 == 'O' || c3 == 'u' || c3 == 'U'){
	vowel++;
}
else{
	consonant++;
}
printf("\nVowels: %d", vowel);
printf("\nConsonants: %d", consonant);
}
