#include<stdio.h>

void discount(int);

int main(){

int quantity;

printf("enter quantity: ");
scanf("%d",&quantity);

discount(quantity);

}
void discount(int quantity){
	
	float total;

	if(quantity*100>1000){

	total=(quantity*100)-10*(quantity*100)/100;
}

else{

	total = quantity*100;
}
	printf("The total cost is:  %.2f",total);


	
}






