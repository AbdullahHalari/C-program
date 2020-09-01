#include <stdio.h>

  fabonacci(int input){
  
  int num1= 0, num2= 1, tem , a = 0;
    
        if (input == num1 || input == num2) {
            printf("%d is a Fibonacci number\n", input);
            return 0;
        }

        while (num2 <= input) {
        tem = num2;
        num2 = num1 + num2;
        num1 = tem;
        if (num2 == input) {
                a = 1;
                break;
           }
        }

        if (a) {
            printf("%d is a Fibonacci number\n", input);
        } else {
            printf("%d is not a Fibonacci number\n",input);
        }
        return 0;
    }
    
    int main() {
  	
  	int input;
  	
  	 printf("Enter ur input:");
        scanf("%d", &input);
        
        fabonacci(input);
  }
