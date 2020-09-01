#include <stdio.h>

void even(int);

int main(){
	
   int n;
   printf("Input number of terms : ");
   scanf("%d",&n);
   
   even(n);
}

void even(int n){
	 int i;
	 int sum=0;
	 

  
   printf("\nThe even numbers are :");
   
   for(i=1;i<=n;i++){
   	
     printf("%d ",2*i);
     sum = sum + 2*i;
     
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
}
