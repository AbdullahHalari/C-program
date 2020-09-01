#include<stdio.h>

void pattern();

int main(){
	
    pattern();
}
	
void pattern(){
	 int rows;
	 printf("Enter Rows: ");
	 scanf("%d",&rows);

	for(int i = 0; i<= rows; i++){ 
		
		
		for(int j =0; j<=i; j++){ 
			
			printf("%d",i); 
			
		}
		
		printf("\n");
	}
}

