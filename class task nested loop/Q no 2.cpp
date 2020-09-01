#include<stdio.h>

void sqaure_pattern();

int main(){
	
    sqaure_pattern();
}
	
void sqaure_pattern(){

	for(int i = 1; i<= 5; i++){ 
		
		
		for(int j =1; j<=i; j++){ 
			
			printf("%d",i*2); 
			
		}
		
		printf("\n");
	}
}
		

