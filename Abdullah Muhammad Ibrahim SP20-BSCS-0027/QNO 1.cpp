#include<stdio.h>
#include<string.h>


void palindrome(int a, char b[100]);
	
int main(){
	int age,i;
	int length=0;
	char name[100];
	
	printf("Enter your name: ");
	gets(name);
	printf("What is your current age: ");
	scanf("%d",&age);
	
	for(i=0;i<strlen(name);i++){
		
		if(name[i]!=' ')			
			length++;
		
	}
	
	if(age>length || age==length){
		printf("\n\nYour name is: %s\n",name);
		printf("Your age is:  %d\n",age);
		printf("The length of your name is: %d\n",length);
		printf("\nProcessing . . . .\n\n");
		palindrome(length, name);
	}
	
	else{
		printf("\n\nYour name is: %s\n",name);
		printf("Your age is:  %d\n",age);
		printf("The length of your name is: %d\n",length);
		printf("The length of your name exceeds your age!\n\nCannot process....\n");
	}
		
}
	
void palindrome(int length, char name[100]){
	
	int a = 0;
	int b = length-1;
	

	
	while(b > 1){
		
		if(name[a]!=name[b]){		
			printf("Your name is not a Palindrome!");
			return;
		}
		
		a++;
		b--;
	}
	
	printf("Your name is a Palindrome!");
	
}
