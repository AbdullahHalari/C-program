#include <stdio.h>
 void largest_of_3(int,int,int);
 
int main(){
    int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest_of_3(num1,num2,num3);
    
}

void largest_of_3(int num1,int num2,int num3){
	
	printf("1st Number = %d,\t 2nd Number = = %d,\t3rd Number = = %d\n", num1, num2, num3);
	
    if (num1>num2&&num1>num3){
    	
    	printf("The 1st Number is the greatest among three");
	}
	
	else if (num2>num1&&num2>num3){
		
		    	printf("The 2nd Number is the greatest among three");

	}
	else{
		    	printf("The 3rd Number is the greatest among three");

	}
}
