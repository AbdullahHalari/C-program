#include <stdio.h>
#include <conio.h>
int main(){
	
	int a, b, c, d,sum;

	
	printf("enter 4 digits :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	 sum =( a+b+c+d);
	printf("sum of digit is: %d\n",sum);
	
	printf("reverse order is : %d %d %d %d  \n",d, c, b, a);
	
	printf("last digit in the first position  : %d%d%d%d \n",d, a, b, c);
	
	printf("Exchanges the second and the third digits : %d %d %d %d  \n",a, c, b, d);
	
	
}
