#include<stdio.h>

int main(){	

	int m,n;
	
	printf("Enter the value of m: ");
	scanf("%d",&m);	
	
	if(m > 0)
		printf("The value of n = 1");
		
	else if(m == 0)
		printf("The value of n = 0");
		
	else if(m < 0)
		printf("The value of n = -1");
		
	else 
	printf("Invalid, enter value again: ");
	
}

