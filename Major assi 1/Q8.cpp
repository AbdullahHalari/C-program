#include <stdio.h>

 void second_largest(int,int,int);
 
int main(){
    int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    second_largest(num1,num2,num3);
    
}

void second_largest(int num1,int num2,int num3){
	
	printf("1st Number = %d,\t 2nd Number = = %d,\t3rd Number = = %d\n", num1, num2, num3);
	
    if (num1>num2&&num1>num3){
    	if(num2>num3){
    		printf("%d is the second largest among three",num2);
		}
		else{
			printf("%d is the second largest among three",num3);
		}
    
	}
	
	 if (num2>num1&&num2>num3){
		  if(num1>num3){
    		printf("%d is the second largest among three",num1);
		}
		else{
			printf("%d is the second largest among three",num3);
		}
	}
	 if (num3>num1&&num3>num2){
		  if(num2>num1){
    		printf("%d is the second largest among three",num2);
		}
		else{
			printf("%d is the second largest among three",num1);
		}
	}

	
}


