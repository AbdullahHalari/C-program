#include <stdio.h> 
int main() { 
	int a , b , h;
	
	printf("Input the value of a : ");
	scanf("%d",&a);
	
	printf("Input the value of b : ");
	scanf("%d",&b);
	
	printf("Input the value of h : ");
	scanf("%d",&h);
	
	int result = ((a + b)/2)*h ;
	
	printf("the area of a trapezoid :%d ",result);
	  
} 

