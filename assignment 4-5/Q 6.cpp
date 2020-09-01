#include <stdio.h>

void odd(int);

int main(){
	int n ;
	
	printf("Input number of terms : ");
    scanf("%d",&n);
	
	odd(n);
  
}

void odd(int n){
	
	 int i;
	 int sum=0;

   
   printf("\nThe odd numbers are :");
   
   for(i=1;i<=n;i++){
   	
     printf("%d ",2*i-1);
     sum = sum + 2*i-1;
     
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}
