#include <stdio.h>

void square(int);

int main(){
	
   int n;
   
   printf("Input number of terms : ");
   scanf("%d",&n);
   
	square(n);
  
}

void square(int n){
	 int i;
	 int sum=0;

   
   printf("\nThe square natural upto %d terms are: ",n);
   
   for(i=1;i<=n;i++){
   	
     printf("%d ",i*i);
     sum = sum + i*i;
   }
   printf("\nThe Sum of square Natural Number upto %d terms : %d \n",n,sum);
}

