#include <stdio.h>
#include <string.h>
void palindrome();
int main(){
	
	palindrome();
}
void palindrome(){

	char string[50], string_2[25]={'\0'};
	int i,length=0,flag=0;
	
	printf("Enter a word: ");
	gets(string);
	
	   for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
	 
	 for (i = length - 1; i >= 0 ; i--){
        string_2[length - i - 1] = string[i];
    }
  	
	    for (flag = 1, i = 0; i < length ; i++)
    {
        if (string_2[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("It is a palindrome! \n", string);
    else
       printf("It is not a palindrome! \n", string);
}
