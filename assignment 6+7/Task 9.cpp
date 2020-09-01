#include <stdio.h>
void reverse();

int main(){
	
	 reverse();
}
	 
void reverse(){

	 
   int i,n,a[50];
   
       
   printf("Input the number: ");
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   for(i=0;i<n;i++)
     {
	   printf("%d  ",a[i]);
	 }
 
   printf("\nThe array in reverse order are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("%d  ",a[i]);
	  }
   printf("\n");
} 






