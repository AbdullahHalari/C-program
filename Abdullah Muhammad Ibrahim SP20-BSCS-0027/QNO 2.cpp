#include<stdio.h>

int fibonacci(int);

int main(){
	
	int n,i;
	
	printf("Enter the Number to print Fibonacci series: ");
	scanf("%d",&n);                                     //take input how much number of series user want
    
	printf("n - 1 = %d\n\n",n-1);	
	
	for(i=1;i<=n-1;i++){

		printf("%d\t",fibonacci(i));       //print the fabonacci series upto n-1

	}
	
}


int fibonacci(int i){

	if(i==0 || i==1){
		return i;                        
	}
	
	else{
		return (fibonacci(i-1) + fibonacci(i-2));      //fibonacci(4) = (fibonacci(4-1) + fibonacci(4-2))
	}                                                   //fibonacci(3) = 2                                 
                                                        //fibonacci(2) = 1
}                                                       //fibonacci(1) = 1
