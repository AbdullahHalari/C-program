#include <stdio.h>

void fabonacci(int);

int main(){
	
	int n ;
	
	printf("Input number of terms to  display : ");
    scanf("%d",&n);
	
	fabonacci(n);
   
}

void fabonacci(int n){
	
	int num_1=0, num_2=1, num, i;
   
   printf("Here is the Fibonacci series upto  to %d terms : \n",n);
   printf("% d % d",num_1,num_2);
 
  for(i=3; i<=n; i++){
  	
     num = num_1+num_2;
     
     printf("% d",num);
     
     num_1 = num_2;
     num_2 = num;
     
   }
   
   printf("\n");
}

