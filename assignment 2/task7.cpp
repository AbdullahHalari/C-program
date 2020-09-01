#include <stdio.h>
#include <conio.h>
int main(){
	float peri,len,wid,area;
	
	printf("area and perimeter of rectangle\n");
	
	printf("enter the value of lenght :");
	scanf("%f",&len);
	
	printf("enter the value of width :");
	scanf("%f",&wid);

	peri = 2*(len+wid);
	printf("the perimeter of rectangule is:%.2f\n",peri); 
	
	area = wid * len ;
	printf("the area of rectangle is :%.2f \n ",area);



}
