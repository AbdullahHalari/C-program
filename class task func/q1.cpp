#include <stdio.h>

void currency(int pak){
	
	float saudi,usdollar,canadian,turkish;
		
	usdollar = pak*0.0064;
	printf("US dollar = %.2f\n",usdollar);
	
	saudi = pak*0.024;
	printf("Saudi dinar = %.2f\n",saudi);
	
	canadian = pak *0.0088;
	printf("Canadian dollar = %.2f\n",canadian);
	
	turkish = pak * 0.039;
	printf("Turkish lira = %.2f\n",turkish);
	
	
	
}
int main(){
	
	float pak;
	
	printf("enter pakistani rupees :");
	scanf("%f",&pak);
	
	currency(pak);
	
	return 0;

}

