#include <stdio.h>
void sum_avg();

int main(){
       
    sum_avg();
}

void sum_avg(){

    int i,num;
	int sum = 0;
	float avg;
	
	printf("Enter the 10 numbers: \n");
	
	for (i=1; i<=10; i++){
		
        printf("Num%d= ",i);
        scanf("%d",&num);
        
		sum = sum + num;
	}
	
    printf("The sum of 10 no is : %d\n",sum);
     
	avg=sum/10;
	printf("The Average is : %.2f\n",avg);
}
 
