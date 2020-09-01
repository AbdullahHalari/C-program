#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void random_number();

int main(){
	
	random_number();
	
	
}


void random_number(){
	
	
   time_t t;
   srand((unsigned) time(&t));

	int a = rand()%50;
	int b = rand()%50;
	int c = rand()%50;
	int d = rand()%50;
	int sum1,sum2;
	
	sum1 = a + b;
	sum2 = c + d;
	
	printf("\nRandom value in variable 'a': %d",a);
	printf("\nRandom value in variable 'b': %d",b);
	printf("\nRandom value in variable 'c': %d",c);
	printf("\nRandom value in variable 'd': %d",d);
	
	printf("\n\nSum of first pair 'a' and 'b' = %d",sum1);
	printf("\nSum of second pair 'c' and 'd' = %d",sum2);
	
	if(sum1>sum2){
		printf("\n\nSum of the first pair is greater than Sum of the second pair\n");
	}
	else if(sum1==sum2){
		printf("\n\nSum of first pair is equal to the Sum of the second pair\n");
	}
	else{
		printf("\n\nSum of second pair is greater than the Sum of the first pair\n");
	}

}
