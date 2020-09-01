#include<stdio.h>

void encountered();

int main(){
	
    encountered();
}
	
void encountered(){
	float num , sum =0 ;
	float limit=-999;
	while(num!=limit){
		printf("enter the number: ");
		scanf("%f",&num);
		sum=sum+num;
	}
	printf("%.2f",sum+999);
	
}
