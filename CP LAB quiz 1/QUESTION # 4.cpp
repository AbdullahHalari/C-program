#include<stdio.h>

void square();

int main(){

    square();

}
void square(){

	  int num;

    printf("Enter the number: ");
    scanf("%d", &num);
   
    if (num/3 && num/5)
	 printf("%d is divisible by both 3 and 5, the square of %d is: %d",num,num,num*num);
	 
	 else 
	 printf("%d is not divisible by both 3 and 5",num);
}
