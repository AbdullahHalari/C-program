#include<stdio.h>

void formula();

int main(){
	
	formula();
}

void formula(){
	
   float A = 3;
   float a = 2;
   float b = 5;
   float C = 3.5;
   float result = a*A*(b*b)+C*(b*b)*(a*a)+ A*b*C+b*(C*C)*a
 
printf("%.0f",result);


}
