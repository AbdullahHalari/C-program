#include<stdio.h>

int main()
{
    char chr;
	
	printf("Enter any character: ");
    scanf("%c",&chr);

    if((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))
    	printf("This  is alphabet.");
    	
    else if(chr >= '0' && chr <= '9')
        printf("This is digit.");
        
    else 
    	printf("This is special character.");

}
;
