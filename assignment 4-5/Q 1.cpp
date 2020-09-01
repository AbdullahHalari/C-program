#include <stdio.h>


void even_odd_check(int);

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	even_odd_check(num);
	
}

void even_odd_check(int num){
	

	if (num%2==0){
	 printf("The number is even");
	} 
	else{
	
	 printf("The number is odd");
   }

}
