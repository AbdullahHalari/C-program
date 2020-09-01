#include <stdio.h>
#include <string.h>
void vowel(){

	char str[100],find,*ptr;
	int i,check=0;
	
	printf("Enter a sentence: ");
	gets(str);
	
	ptr=str;
	
	printf("\nEnter a vowel to find in the sentence: ");
	scanf("%c",&find);
	
	if(find=='a' || find=='e' || find=='i' || find=='o' || find=='u'){
		while(*ptr=*ptr!='\0'){
			if(*ptr==find){
				check=1;
				break;
			}
			*ptr++;
		}
		
		printf("\n%c is a present in the string!",find);

	}
	else{
		printf("\nYou can only search a vowel.");
	}
}

int main(){
	
	vowel();
}
