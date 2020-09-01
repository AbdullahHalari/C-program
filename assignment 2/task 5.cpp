#include <stdio.h>
#include <conio.h>
int main(){
	
	 int a ;
	 
	 printf("enter an integer: ");
	 
	 scanf("%d",&a) ;
	 
	 if (a % 5 == 0 || a % 7 == 0 ){
	 	printf("the number is divisible by 5 or 7 both");
	 	
	 }
	 else {
	   printf("the num is not divisible");
	 }
	 
	 return(0);
}

